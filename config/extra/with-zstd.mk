FD_HAS_ZSTD:=1
CFLAGS+=-DFD_HAS_ZSTD=1
# qtrade
# LDFLAGS+=opt/lib/libzstd.a
LDFLAGS+=/usr/lib/x86_64-linux-gnu/libzstd.a
