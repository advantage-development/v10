DIST_SUBDIRS = secp256k1
AM_LDFLAGS = $(PTHREAD_CFLAGS) $(LIBTOOL_LDFLAGS)


if EMBEDDED_LEVELDB
LEVELDB_CPPFLAGS += -I$(srcdir)/leveldb/include
LEVELDB_CPPFLAGS += -I$(srcdir)/leveldb/helpers/memenv
LIBLEVELDB += $(builddir)/leveldb/libleveldb.a
LIBMEMENV  += $(builddir)/leveldb/libmemenv.a

# NOTE: This dependency is not strictly necessary, but without it make may try to build both in parallel, which breaks the LevelDB build system in a race
$(LIBLEVELDB): $(LIBMEMENV)

$(LIBLEVELDB) $(LIBMEMENV):
	@echo "Building LevelDB ..." && $(MAKE) -C $(@D) $(@F) CXX="$(CXX)" \
	  CC="$(CC)" PLATFORM=$(TARGET_OS) AR="$(AR)" $(LEVELDB_TARGET_FLAGS) \
          OPT="$(CXXFLAGS) $(CPPFLAGS)"
endif

BITCREDIT_CONFIG_INCLUDES=-I$(builddir)/config
BITCREDIT_INCLUDES=-I$(builddir) -I$(builddir)/obj $(BOOST_CPPFLAGS) $(LEVELDB_CPPFLAGS) $(CRYPTO_CFLAGS) $(SSL_CFLAGS)

BITCREDIT_INCLUDES += -I$(srcdir)/secp256k1/include

LIBBITCREDIT_SERVER=libbitcredit_server.a
LIBBITCREDIT_WALLET=libbitcredit_wallet.a
LIBBITCREDIT_COMMON=libbitcredit_common.a
LIBBITCREDIT_CLI=libbitcredit_cli.a
LIBBITCREDIT_UTIL=libbitcredit_util.a
LIBBITCREDIT_CRYPTO=crypto/libbitcredit_crypto.a
LIBBITCREDIT_UNIVALUE=univalue/libbitcredit_univalue.a
LIBBITCREDITQT=qt/libbitcreditqt.a
LIBSECP256K1=secp256k1/libsecp256k1.la

$(LIBSECP256K1): $(wildcard secp256k1/src/*) $(wildcard secp256k1/include/*)
	$(AM_V_at)$(MAKE) $(AM_MAKEFLAGS) -C $(@D) $(@F)

# Make is not made aware of per-object dependencies to avoid limiting building parallelization
# But to build the less dependent modules first, we manually select their order here:
EXTRA_LIBRARIES = \
  crypto/libbitcredit_crypto.a \
  libbitcredit_util.a \
  libbitcredit_common.a \
  univalue/libbitcredit_univalue.a \
  libbitcredit_server.a \
  libbitcredit_cli.a
if ENABLE_WALLET
BITCREDIT_INCLUDES += $(BDB_CPPFLAGS)
EXTRA_LIBRARIES += libbitcredit_wallet.a
endif

if ENABLE_ZMQ
EXTRA_LIBRARIES += libbitcredit_zmq.a
endif

if BUILD_BITCREDIT_LIBS
lib_LTLIBRARIES = libbitcreditconsensus.la
LIBBITCREDIT_CONSENSUS=libbitcreditconsensus.la
else
LIBBITCREDIT_CONSENSUS=
endif

bin_PROGRAMS =
TESTS =

if BUILD_BITCREDITD
  bin_PROGRAMS += advantaged
endif

if BUILD_BITCREDIT_UTILS
  bin_PROGRAMS += advantage-cli advantage-tx
endif

.PHONY: FORCE
# advantage core #
BITCREDIT_CORE_H = \
  activemasternode.h \
  addrman.h \
  alert.h \
  allocators.h \
  amount.h \
  base58.h \
  bip38.h \
  bloom.h \
  chain.h \
  chainparams.h \
  chainparamsbase.h \
  chainparamsseeds.h \
  checkpoints.h \
  checkqueue.h \
  clientversion.h \
  coincontrol.h \
  credits.h \
  compat.h \
  compat/sanity.h \
  compressor.h \
  primitives/block.h \
  primitives/transaction.h \
  core_io.h \
  crypter.h \
  obfuscation.h \
  obfuscation-relay.h \
  db.h \
  eccryptoverify.h \
  ecwrapper.h \
  hash.h \
  init.h \
  kernel.h \
  swifttx.h \
  key.h \
  keystore.h \
  leveldbwrapper.h \
  limitedmap.h \
  main.h \
  masternode.h \
  masternode-payments.h \
  masternode-budget.h \
  masternode-sync.h \
  masternodeman.h \
  masternodeconfig.h \
  merkleblock.h \
  miner.h \
  mruset.h \
  netbase.h \
  net.h \
  noui.h \
  pow.h \
  protocol.h \
  pubkey.h \
  random.h \
  rpcclient.h \
  rpcprotocol.h \
  rpcserver.h \
  script/interpreter.h \
  script/script.h \
  script/sigcache.h \
  script/sign.h \
  script/standard.h \
  script/script_error.h \
  serialize.h \
  spork.h \
  streams.h \
  sync.h \
  threadsafety.h \
  timedata.h \
  tinyformat.h \
  txdb.h \
  txmempool.h \
  ui_interface.h \
  uint256.h \
  undo.h \
  util.h \
  utilstrencodings.h \
  utilmoneystr.h \
  utiltime.h \
  validationinterface.h \
  version.h \
  wallet.h \
  wallet_ismine.h \
  walletdb.h \
  zmq/zmqabstractnotifier.h \
  zmq/zmqconfig.h \
  zmq/zmqnotificationinterface.h \
  zmq/zmqpublishnotifier.h

JSON_H = \
  json/json_spirit.h \
  json/json_spirit_error_position.h \
  json/json_spirit_reader.h \
  json/json_spirit_reader_template.h \
  json/json_spirit_stream_reader.h \
  json/json_spirit_utils.h \
  json/json_spirit_value.h \
  json/json_spirit_writer.h \
  json/json_spirit_writer_template.h

obj/build.h: FORCE
	@$(MKDIR_P) $(builddir)/obj
	@$(top_srcdir)/share/genbuild.sh $(abs_top_builddir)/src/obj/build.h \
	  $(abs_top_srcdir)
libbitcredit_util_a-clientversion.$(OBJEXT): obj/build.h

# server: shared between advantaged and advantage-qt
libbitcredit_server_a_CPPFLAGS = $(BITCREDIT_INCLUDES) $(MINIUPNPC_CPPFLAGS)
libbitcredit_server_a_SOURCES = \
  addrman.cpp \
  alert.cpp \
  bloom.cpp \
  chain.cpp \
  checkpoints.cpp \
  init.cpp \
  leveldbwrapper.cpp \
  main.cpp \
  merkleblock.cpp \
  miner.cpp \
  net.cpp \
  noui.cpp \
  pow.cpp \
  rest.cpp \
  rpcblockchain.cpp \
  rpcmasternode.cpp \
  rpcmasternode-budget.cpp \
  rpcmining.cpp \
  rpcmisc.cpp \
  rpcnet.cpp \
  rpcrawtransaction.cpp \
  rpcserver.cpp \
  script/sigcache.cpp \
  timedata.cpp \
  txdb.cpp \
  txmempool.cpp \
  validationinterface.cpp \
  $(JSON_H) \
  $(BITCREDIT_CORE_H)

if ENABLE_ZMQ
LIBBITCREDIT_ZMQ=libbitcredit_zmq.a

libbitcredit_zmq_a_CPPFLAGS = $(BITCREDIT_INCLUDES) $(ZMQ_CFLAGS)
libbitcredit_zmq_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libbitcredit_zmq_a_SOURCES = \
  zmq/zmqabstractnotifier.cpp \
  zmq/zmqnotificationinterface.cpp \
  zmq/zmqpublishnotifier.cpp
endif

# wallet: shared between advantaged and advantage-qt, but only linked
# when wallet enabled

libbitcredit_wallet_a_CFLAGS = -fPIC
libbitcredit_wallet_a_CPPFLAGS = $(BITCREDIT_INCLUDES)
libbitcredit_wallet_a_SOURCES = \
  activemasternode.cpp \
  bip38.cpp \
  obfuscation.cpp \
  obfuscation-relay.cpp \
  db.cpp \
  crypter.cpp \
  swifttx.cpp \
  masternode.cpp \
  masternode-budget.cpp \
  masternode-payments.cpp \
  masternode-sync.cpp \
  masternodeconfig.cpp \
  masternodeman.cpp \
  rpcdump.cpp \
  rpcwallet.cpp \
  kernel.cpp \
  wallet.cpp \
  wallet_ismine.cpp \
  walletdb.cpp \
  $(BITCREDIT_CORE_H)

# crypto primitives library
crypto_libbitcredit_crypto_a_CFLAGS = -fPIC
crypto_libbitcredit_crypto_a_CPPFLAGS = $(BITCREDIT_CONFIG_INCLUDES)
crypto_libbitcredit_crypto_a_SOURCES = \
  crypto/sha1.cpp \
  crypto/sha256.cpp \
  crypto/sha512.cpp \
  crypto/hmac_sha256.cpp \
  crypto/rfc6979_hmac_sha256.cpp \
  crypto/hmac_sha512.cpp \
  crypto/scrypt.cpp \
  crypto/ripemd160.cpp \
  crypto/aes_helper.c \
  crypto/blake.c \
  crypto/bmw.c \
  crypto/groestl.c \
  crypto/jh.c \
  crypto/keccak.c \
  crypto/skein.c \
  crypto/common.h \
  crypto/sha256.h \
  crypto/sha512.h \
  crypto/hmac_sha256.h \
  crypto/rfc6979_hmac_sha256.h \
  crypto/hmac_sha512.h \
  crypto/scrypt.h \
  crypto/sha1.h \
  crypto/ripemd160.h \
  crypto/sph_blake.h \
  crypto/sph_bmw.h \
  crypto/sph_groestl.h \
  crypto/sph_jh.h \
  crypto/sph_keccak.h \
  crypto/sph_skein.h \
  crypto/sph_types.h

# univalue JSON library
univalue_libbitcredit_univalue_a_SOURCES = \
  univalue/univalue.cpp \
  univalue/univalue_read.cpp \
  univalue/univalue_write.cpp \
  univalue/univalue_escapes.h \
  univalue/univalue.h

# common: shared between advantaged, and advantage-qt and non-server tools
libbitcredit_common_a_CPPFLAGS = $(BITCREDIT_INCLUDES)
libbitcredit_common_a_SOURCES = \
  allocators.cpp \
  amount.cpp \
  base58.cpp \
  bip38.cpp \
  chainparams.cpp \
  credits.cpp \
  compressor.cpp \
  primitives/block.cpp \
  primitives/transaction.cpp \
  core_read.cpp \
  core_write.cpp \
  eccryptoverify.cpp \
  ecwrapper.cpp \
  hash.cpp \
  key.cpp \
  keystore.cpp \
  netbase.cpp \
  protocol.cpp \
  pubkey.cpp \
  script/interpreter.cpp \
  script/script.cpp \
  script/sign.cpp \
  script/standard.cpp \
  script/script_error.cpp \
  spork.cpp \
  $(BITCREDIT_CORE_H)

# util: shared between all executables.
# This library *must* be included to make sure that the glibc
# backward-compatibility objects and their sanity checks are linked.
libbitcredit_util_a_CPPFLAGS = $(BITCREDIT_INCLUDES)
libbitcredit_util_a_SOURCES = \
  allocators.cpp \
  compat/strnlen.cpp \
  compat/glibc_sanity.cpp \
  compat/glibcxx_sanity.cpp \
  chainparamsbase.cpp \
  clientversion.cpp \
  random.cpp \
  rpcprotocol.cpp \
  sync.cpp \
  uint256.cpp \
  util.cpp \
  utilstrencodings.cpp \
  utilmoneystr.cpp \
  utiltime.cpp \
  $(BITCREDIT_CORE_H)

if GLIBC_BACK_COMPAT
libbitcredit_util_a_SOURCES += compat/glibc_compat.cpp
libbitcredit_util_a_SOURCES += compat/glibcxx_compat.cpp
endif

# cli: shared between advantage-cli and advantage-qt
libbitcredit_cli_a_CPPFLAGS = $(BITCREDIT_INCLUDES)
libbitcredit_cli_a_SOURCES = \
  rpcclient.cpp \
  $(BITCREDIT_CORE_H)

nodist_libbitcredit_util_a_SOURCES = $(srcdir)/obj/build.h
#

# bitcreditd binary #
advantaged_LDADD = \
  $(LIBBITCREDIT_SERVER) \
  $(LIBBITCREDIT_COMMON) \
  $(LIBBITCREDIT_UNIVALUE) \
  $(LIBBITCREDIT_UTIL) \
  $(LIBBITCREDIT_CRYPTO) \
  $(LIBLEVELDB) \
  $(LIBMEMENV) \
  $(LIBSECP256K1)

if ENABLE_ZMQ
advantaged_LDADD += $(LIBBITCREDIT_ZMQ) $(ZMQ_LIBS)
endif

if ENABLE_WALLET
advantaged_LDADD += libbitcredit_wallet.a
endif
advantaged_SOURCES = advantaged.cpp
#

if TARGET_WINDOWS
advantaged_SOURCES += advantaged-res.rc
endif

advantaged_LDADD += $(BOOST_LIBS) $(BDB_LIBS) $(SSL_LIBS) $(CRYPTO_LIBS) $(MINIUPNPC_LIBS)
advantaged_CPPFLAGS = $(BITCREDIT_INCLUDES)
advantaged_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS)


# advantage-cli binary #
advantage_cli_LDADD = \
  $(LIBBITCREDIT_CLI) \
  $(LIBBITCREDIT_UTIL) \
  $(BOOST_LIBS) \
  $(SSL_LIBS) \
  $(CRYPTO_LIBS)

advantage_cli_SOURCES = \
  advantage-cli.cpp

advantage_cli_CPPFLAGS = $(BITCREDIT_INCLUDES)
#

# advantage-tx binary #
advantage_tx_LDADD = \
  $(LIBBITCREDIT_UNIVALUE) \
  $(LIBBITCREDIT_COMMON) \
  $(LIBBITCREDIT_UTIL) \
  $(LIBBITCREDIT_CRYPTO) \
  $(LIBSECP256K1) \
  $(BOOST_LIBS) \
  $(CRYPTO_LIBS)

advantage_tx_SOURCES = advantage-tx.cpp
advantage_tx_CPPFLAGS = $(BITCREDIT_INCLUDES)
#
advantage_tx_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS)

if TARGET_WINDOWS
advantage_cli_SOURCES += advantage-cli-res.rc
endif
advantage_cli_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS)

if BUILD_BITCREDIT_LIBS
include_HEADERS = script/bitcreditconsensus.h
libbitcreditconsensus_la_SOURCES = \
  allocators.cpp \
  primitives/transaction.cpp \
  crypto/hmac_sha512.cpp \
  crypto/scrypt.cpp \
  crypto/sha1.cpp \
  crypto/sha256.cpp \
  crypto/sha512.cpp \
  crypto/ripemd160.cpp \
  eccryptoverify.cpp \
  ecwrapper.cpp \
  hash.cpp \
  pubkey.cpp \
  script/script.cpp \
  script/interpreter.cpp \
  script/bitcreditconsensus.cpp \
  uint256.cpp \
  utilstrencodings.cpp

if GLIBC_BACK_COMPAT
  libbitcreditconsensus_la_SOURCES += compat/glibc_compat.cpp
  libbitcreditconsensus_la_SOURCES += compat/glibcxx_compat.cpp
endif

libbitcreditconsensus_la_LDFLAGS = -no-undefined $(RELDFLAGS)
libbitcreditconsensus_la_LIBADD = $(CRYPTO_LIBS) $(BOOST_LIBS)
libbitcreditconsensus_la_CPPFLAGS = $(CRYPTO_CFLAGS) -I$(builddir)/obj -DBUILD_BITCREDIT_INTERNAL
if USE_LIBSECP256K1
libbitcreditconsensus_la_LIBADD += secp256k1/libsecp256k1.la
endif
endif

CLEANFILES = leveldb/libleveldb.a leveldb/libmemenv.a
CLEANFILES += *.gcda *.gcno
CLEANFILES += compat/*.gcda compat/*.gcno
CLEANFILES += crypto/*.gcda crypto/*.gcno
CLEANFILES += primitives/*.gcda primitives/*.gcno
CLEANFILES += script/*.gcda script/*.gcno
CLEANFILES += univalue/*.gcda univalue/*.gcno
CLEANFILES += zmq/*.gcda zmq/*.gcno

DISTCLEANFILES = obj/build.h

EXTRA_DIST = leveldb

clean-local:
	-$(MAKE) -C leveldb clean
	-$(MAKE) -C secp256k1 clean
	rm -f leveldb/*/*.gcno leveldb/helpers/memenv/*.gcno
	-rm -f config.h

.rc.o:
	@test -f $(WINDRES)
	$(AM_V_GEN) $(WINDRES) -DWINDRES_PREPROC -i $< -o $@

%.pb.cc %.pb.h: %.proto
	@test -f $(PROTOC)
	$(AM_V_GEN) $(PROTOC) --cpp_out=$(@D) --proto_path=$(abspath $(<D) $<)

if ENABLE_TESTS
include Makefile.test.include
endif

if ENABLE_QT
include Makefile.qt.include
endif

if ENABLE_QT_TESTS
include Makefile.qttest.include
endif
