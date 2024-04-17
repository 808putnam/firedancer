BUILDDIR?=linux/gcc/zen3

include config/base.mk
include config/extra/with-security.mk
include config/extra/with-gcc.mk
include config/extra/with-x86-64.mk
include config/extra/with-debug.mk
include config/extra/with-brutality.mk
include config/extra/with-optimization.mk
include config/extra/with-threads.mk
include config/extra/with-openssl.mk
include config/extra/with-zstd.mk
include config/extra/with-secp256k1.mk
include config/extra/with-bz2.mk
include config/extra/with-rocksdb.mk
include config/extra/with-libff.mk
include config/extra/with-libmicrohttp.mk

# GCC 8 (Firedancer's minimum supported GCC version) only supports znver1.
ifeq ($(shell $(CC) -dumpversion),8)
CPPFLAGS+=-march=znver1 -mtune=znver1
else
# GCC 9 only supports znver{1,2}.
ifeq ($(shell $(CC) -dumpversion),9)
CPPFLAGS+=-march=znver2 -mtune=znver2\
else
CPPFLAGS+=-march=znver3 -mtune=znver3
endif
endif

CPPFLAGS+=-fomit-frame-pointer \
  -mfpmath=sse \
  -mbranch-cost=5 \
  -DFD_HAS_INT128=1 \
  -DFD_HAS_DOUBLE=1 \
  -DFD_HAS_ALLOCA=1 \
  -DFD_HAS_X86=1 \
  -DFD_HAS_SSE=1 \
  -DFD_HAS_AVX=1 \
  -DFD_HAS_SHANI=1 \
  -DFD_USE_ARCH_MEMCPY=0 \
  -DFD_USE_ARCH_MEMSET=0

FD_HAS_INT128:=1
FD_HAS_DOUBLE:=1
FD_HAS_ALLOCA:=1
FD_HAS_X86:=1
FD_HAS_SSE:=1
FD_HAS_AVX:=1
FD_HAS_SHANI:=1
