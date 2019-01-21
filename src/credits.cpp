// Copyright (c) 2012-2014 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "credits.h"

#include "random.h"

#include <assert.h>

/**
 * calculate number of bytes for the bitmask, and its number of non-zero bytes
 * each bit in the bitmask represents the availability of one output, but the
 * availabilities of the first two outputs are encoded separately
 */
void CCredits::CalcMaskSize(unsigned int& nBytes, unsigned int& nNonzeroBytes) const
{
    unsigned int nLastUsedByte = 0;
    for (unsigned int b = 0; 2 + b * 8 < vout.size(); b++) {
        bool fZero = true;
        for (unsigned int i = 0; i < 8 && 2 + b * 8 + i < vout.size(); i++) {
            if (!vout[2 + b * 8 + i].IsNull()) {
                fZero = false;
                continue;
            }
        }
        if (!fZero) {
            nLastUsedByte = b + 1;
            nNonzeroBytes++;
        }
    }
    nBytes += nLastUsedByte;
}

bool CCredits::Spend(const COutPoint& out, CTxInUndo& undo)
{
    if (out.n >= vout.size())
        return false;
    if (vout[out.n].IsNull())
        return false;
    undo = CTxInUndo(vout[out.n]);
    vout[out.n].SetNull();
    Cleanup();
    if (vout.size() == 0) {
        undo.nHeight = nHeight;
        undo.fCoinBase = fCoinBase;
        undo.fCoinStake = fCoinStake;
        undo.nVersion = this->nVersion;
    }
    return true;
}

bool CCredits::Spend(int nPos)
{
    CTxInUndo undo;
    COutPoint out(0, nPos);
    return Spend(out, undo);
}


bool CCreditsView::GetCredits(const uint256& txid, CCredits& credits) const { return false; }
bool CCreditsView::HaveCredits(const uint256& txid) const { return false; }
uint256 CCreditsView::GetBestBlock() const { return uint256(0); }
bool CCreditsView::BatchWrite(CCreditsMap& mapCredits, const uint256& hashBlock) { return false; }
bool CCreditsView::GetStats(CCreditsStats& stats) const { return false; }


CCreditsViewBacked::CCreditsViewBacked(CCreditsView* viewIn) : base(viewIn) {}
bool CCreditsViewBacked::GetCredits(const uint256& txid, CCredits& credits) const { return base->GetCredits(txid, credits); }
bool CCreditsViewBacked::HaveCredits(const uint256& txid) const { return base->HaveCredits(txid); }
uint256 CCreditsViewBacked::GetBestBlock() const { return base->GetBestBlock(); }
void CCreditsViewBacked::SetBackend(CCreditsView& viewIn) { base = &viewIn; }
bool CCreditsViewBacked::BatchWrite(CCreditsMap& mapCredits, const uint256& hashBlock) { return base->BatchWrite(mapCredits, hashBlock); }
bool CCreditsViewBacked::GetStats(CCreditsStats& stats) const { return base->GetStats(stats); }

CCreditsKeyHasher::CCreditsKeyHasher() : salt(GetRandHash()) {}

CCreditsViewCache::CCreditsViewCache(CCreditsView* baseIn) : CCreditsViewBacked(baseIn), hasModifier(false), hashBlock(0) {}

CCreditsViewCache::~CCreditsViewCache()
{
    assert(!hasModifier);
}

CCreditsMap::const_iterator CCreditsViewCache::FetchCredits(const uint256& txid) const
{
    CCreditsMap::iterator it = cacheCredits.find(txid);
    if (it != cacheCredits.end())
        return it;
    CCredits tmp;
    if (!base->GetCredits(txid, tmp))
        return cacheCredits.end();
    CCreditsMap::iterator ret = cacheCredits.insert(std::make_pair(txid, CCreditsCacheEntry())).first;
    tmp.swap(ret->second.credits);
    if (ret->second.credits.IsPruned()) {
        // The parent only has an empty entry for this txid; we can consider our
        // version as fresh.
        ret->second.flags = CCreditsCacheEntry::FRESH;
    }
    return ret;
}

bool CCreditsViewCache::GetCredits(const uint256& txid, CCredits& credits) const
{
    CCreditsMap::const_iterator it = FetchCredits(txid);
    if (it != cacheCredits.end()) {
        credits = it->second.credits;
        return true;
    }
    return false;
}

CCreditsModifier CCreditsViewCache::ModifyCredits(const uint256& txid)
{
    assert(!hasModifier);
    std::pair<CCreditsMap::iterator, bool> ret = cacheCredits.insert(std::make_pair(txid, CCreditsCacheEntry()));
    if (ret.second) {
        if (!base->GetCredits(txid, ret.first->second.credits)) {
            // The parent view does not have this entry; mark it as fresh.
            ret.first->second.credits.Clear();
            ret.first->second.flags = CCreditsCacheEntry::FRESH;
        } else if (ret.first->second.credits.IsPruned()) {
            // The parent view only has a pruned entry for this; mark it as fresh.
            ret.first->second.flags = CCreditsCacheEntry::FRESH;
        }
    }
    // Assume that whenever ModifyCredits is called, the entry will be modified.
    ret.first->second.flags |= CCreditsCacheEntry::DIRTY;
    return CCreditsModifier(*this, ret.first);
}

const CCredits* CCreditsViewCache::AccessCredits(const uint256& txid) const
{
    CCreditsMap::const_iterator it = FetchCredits(txid);
    if (it == cacheCredits.end()) {
        return NULL;
    } else {
        return &it->second.credits;
    }
}

bool CCreditsViewCache::HaveCredits(const uint256& txid) const
{
    CCreditsMap::const_iterator it = FetchCredits(txid);
    // We're using vtx.empty() instead of IsPruned here for performance reasons,
    // as we only care about the case where a transaction was replaced entirely
    // in a reorganization (which wipes vout entirely, as opposed to spending
    // which just cleans individual outputs).
    return (it != cacheCredits.end() && !it->second.credits.vout.empty());
}

uint256 CCreditsViewCache::GetBestBlock() const
{
    if (hashBlock == uint256(0))
        hashBlock = base->GetBestBlock();
    return hashBlock;
}

void CCreditsViewCache::SetBestBlock(const uint256& hashBlockIn)
{
    hashBlock = hashBlockIn;
}

bool CCreditsViewCache::BatchWrite(CCreditsMap& mapCredits, const uint256& hashBlockIn)
{
    assert(!hasModifier);
    for (CCreditsMap::iterator it = mapCredits.begin(); it != mapCredits.end();) {
        if (it->second.flags & CCreditsCacheEntry::DIRTY) { // Ignore non-dirty entries (optimization).
            CCreditsMap::iterator itUs = cacheCredits.find(it->first);
            if (itUs == cacheCredits.end()) {
                if (!it->second.credits.IsPruned()) {
                    // The parent cache does not have an entry, while the child
                    // cache does have (a non-pruned) one. Move the data up, and
                    // mark it as fresh (if the grandparent did have it, we
                    // would have pulled it in at first GetCredits).
                    assert(it->second.flags & CCreditsCacheEntry::FRESH);
                    CCreditsCacheEntry& entry = cacheCredits[it->first];
                    entry.credits.swap(it->second.credits);
                    entry.flags = CCreditsCacheEntry::DIRTY | CCreditsCacheEntry::FRESH;
                }
            } else {
                if ((itUs->second.flags & CCreditsCacheEntry::FRESH) && it->second.credits.IsPruned()) {
                    // The grandparent does not have an entry, and the child is
                    // modified and being pruned. This means we can just delete
                    // it from the parent.
                    cacheCredits.erase(itUs);
                } else {
                    // A normal modification.
                    itUs->second.credits.swap(it->second.credits);
                    itUs->second.flags |= CCreditsCacheEntry::DIRTY;
                }
            }
        }
        CCreditsMap::iterator itOld = it++;
        mapCredits.erase(itOld);
    }
    hashBlock = hashBlockIn;
    return true;
}

bool CCreditsViewCache::Flush()
{
    bool fOk = base->BatchWrite(cacheCredits, hashBlock);
    cacheCredits.clear();
    return fOk;
}

unsigned int CCreditsViewCache::GetCacheSize() const
{
    return cacheCredits.size();
}

const CTxOut& CCreditsViewCache::GetOutputFor(const CTxIn& input) const
{
    const CCredits* credits = AccessCredits(input.prevout.hash);
    assert(credits && credits->IsAvailable(input.prevout.n));
    return credits->vout[input.prevout.n];
}

CAmount CCreditsViewCache::GetValueIn(const CTransaction& tx) const
{
    if (tx.IsCoinBase())
        return 0;

    CAmount nResult = 0;
    for (unsigned int i = 0; i < tx.vin.size(); i++)
        nResult += GetOutputFor(tx.vin[i]).nValue;

    return nResult;
}

bool CCreditsViewCache::HaveInputs(const CTransaction& tx) const
{
    if (!tx.IsCoinBase()) {
        for (unsigned int i = 0; i < tx.vin.size(); i++) {
            const COutPoint& prevout = tx.vin[i].prevout;
            const CCredits* credits = AccessCredits(prevout.hash);
            if (!credits || !credits->IsAvailable(prevout.n)) {
                return false;
            }
        }
    }
    return true;
}

double CCreditsViewCache::GetPriority(const CTransaction& tx, int nHeight) const
{
    if (tx.IsCoinBase() || tx.IsCoinStake())
        return 0.0;
    double dResult = 0.0;
    for (const CTxIn& txin:  tx.vin) {
        const CCredits* credits = AccessCredits(txin.prevout.hash);
        assert(credits);
        if (!credits->IsAvailable(txin.prevout.n)) continue;
        if (credits->nHeight < nHeight) {
            dResult += credits->vout[txin.prevout.n].nValue * (nHeight - credits->nHeight);
        }
    }
    return tx.ComputePriority(dResult);
}

CCreditsModifier::CCreditsModifier(CCreditsViewCache& cache_, CCreditsMap::iterator it_) : cache(cache_), it(it_)
{
    assert(!cache.hasModifier);
    cache.hasModifier = true;
}

CCreditsModifier::~CCreditsModifier()
{
    assert(cache.hasModifier);
    cache.hasModifier = false;
    it->second.credits.Cleanup();
    if ((it->second.flags & CCreditsCacheEntry::FRESH) && it->second.credits.IsPruned()) {
        cache.cacheCredits.erase(it);
    }
}
