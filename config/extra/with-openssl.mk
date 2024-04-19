# qtrade
# LDFLAGS+=opt/lib/libssl.a opt/lib/libcrypto.a
LDFLAGS+=/usr/lib/x86_64-linux-gnu/libssl.a /usr/lib/x86_64-linux-gnu/libcrypto.a

FD_HAS_OPENSSL:=1
CPPFLAGS+=-DFD_HAS_OPENSSL=1

CPPFLAGS+=-DOPENSSL_API_COMPAT=30000 -DOPENSSL_NO_DEPRECATED
