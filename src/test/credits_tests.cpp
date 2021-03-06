// Copyright (c) 2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "credits.h"
#include "random.h"
#include "uint256.h"

#include <vector>
#include <map>

#include <boost/test/unit_test.hpp>

namespace
{
class CCreditsViewTest : public CCreditsView
{
    uint256 hashBestBlock_;
    std::map<uint256, CCredits> map_;

public:
    bool GetCredits(const uint256& txid, CCredits& credits) const
    {
        std::map<uint256, CCredits>::const_iterator it = map_.find(txid);
        if (it == map_.end()) {
            return false;
        }
        credits = it->second;
        if (credits.IsPruned() && insecure_rand() % 2 == 0) {
            // Randomly return false in case of an empty entry.
            return false;
        }
        return true;
    }

    bool HaveCredits(const uint256& txid) const
    {
        CCredits credits;
        return GetCredits(txid, credits);
    }

    uint256 GetBestBlock() const { return hashBestBlock_; }

    bool BatchWrite(CCreditsMap& mapCredits, const uint256& hashBlock)
    {
        for (CCreditsMap::iterator it = mapCredits.begin(); it != mapCredits.end(); ) {
            map_[it->first] = it->second.credits;
            if (it->second.credits.IsPruned() && insecure_rand() % 3 == 0) {
                // Randomly delete empty entries on write.
                map_.erase(it->first);
            }
            mapCredits.erase(it++);
        }
        mapCredits.clear();
        hashBestBlock_ = hashBlock;
        return true;
    }

    bool GetStats(CCreditsStats& stats) const { return false; }
};
}

BOOST_AUTO_TEST_SUITE(credits_tests)

static const unsigned int NUM_SIMULATION_ITERATIONS = 40000;

// This is a large randomized insert/remove simulation test on a variable-size
// stack of caches on top of CCreditsViewTest.
//
// It will randomly create/update/delete CCredits entries to a tip of caches, with
// txids picked from a limited list of random 256-bit hashes. Occasionally, a
// new tip is added to the stack of caches, or the tip is flushed and removed.
//
// During the process, booleans are kept to make sure that the randomized
// operation hits all branches.
BOOST_AUTO_TEST_CASE(credits_cache_simulation_test)
{
    // Various coverage trackers.
    bool removed_all_caches = false;
    bool reached_4_caches = false;
    bool added_an_entry = false;
    bool removed_an_entry = false;
    bool updated_an_entry = false;
    bool found_an_entry = false;
    bool missed_an_entry = false;

    // A simple map to track what we expect the cache stack to represent.
    std::map<uint256, CCredits> result;

    // The cache stack.
    CCreditsViewTest base; // A CCreditsViewTest at the bottom.
    std::vector<CCreditsViewCache*> stack; // A stack of CCreditsViewCaches on top.
    stack.push_back(new CCreditsViewCache(&base)); // Start with one cache.

    // Use a limited set of random transaction ids, so we do test overwriting entries.
    std::vector<uint256> txids;
    txids.resize(NUM_SIMULATION_ITERATIONS / 8);
    for (unsigned int i = 0; i < txids.size(); i++) {
        txids[i] = GetRandHash();
    }

    for (unsigned int i = 0; i < NUM_SIMULATION_ITERATIONS; i++) {
        // Do a random modification.
        {
            uint256 txid = txids[insecure_rand() % txids.size()]; // txid we're going to modify in this iteration.
            CCredits& credits = result[txid];
            CCreditsModifier entry = stack.back()->ModifyCredits(txid);
            BOOST_CHECK(credits == *entry);
            if (insecure_rand() % 5 == 0 || credits.IsPruned()) {
                if (credits.IsPruned()) {
                    added_an_entry = true;
                } else {
                    updated_an_entry = true;
                }
                credits.nVersion = insecure_rand();
                credits.vout.resize(1);
                credits.vout[0].nValue = insecure_rand();
                *entry = credits;
            } else {
                credits.Clear();
                entry->Clear();
                removed_an_entry = true;
            }
        }

        // Once every 1000 iterations and at the end, verify the full cache.
        if (insecure_rand() % 1000 == 1 || i == NUM_SIMULATION_ITERATIONS - 1) {
            for (std::map<uint256, CCredits>::iterator it = result.begin(); it != result.end(); it++) {
                const CCredits* credits = stack.back()->AccessCredits(it->first);
                if (credits) {
                    BOOST_CHECK(*credits == it->second);
                    found_an_entry = true;
                } else {
                    BOOST_CHECK(it->second.IsPruned());
                    missed_an_entry = true;
                }
            }
        }

        if (insecure_rand() % 100 == 0) {
            // Every 100 iterations, change the cache stack.
            if (stack.size() > 0 && insecure_rand() % 2 == 0) {
                stack.back()->Flush();
                delete stack.back();
                stack.pop_back();
            }
            if (stack.size() == 0 || (stack.size() < 4 && insecure_rand() % 2)) {
                CCreditsView* tip = &base;
                if (stack.size() > 0) {
                    tip = stack.back();
                } else {
                    removed_all_caches = true;
                }
                stack.push_back(new CCreditsViewCache(tip));
                if (stack.size() == 4) {
                    reached_4_caches = true;
                }
            }
        }
    }

    // Clean up the stack.
    while (stack.size() > 0) {
        delete stack.back();
        stack.pop_back();
    }

    // Verify coverage.
    BOOST_CHECK(removed_all_caches);
    BOOST_CHECK(reached_4_caches);
    BOOST_CHECK(added_an_entry);
    BOOST_CHECK(removed_an_entry);
    BOOST_CHECK(updated_an_entry);
    BOOST_CHECK(found_an_entry);
    BOOST_CHECK(missed_an_entry);
}

BOOST_AUTO_TEST_SUITE_END()
