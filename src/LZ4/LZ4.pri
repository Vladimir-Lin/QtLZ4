INCLUDEPATH += $${PWD}

HEADERS     += $${PWD}/lz4.h
HEADERS     += $${PWD}/lz4hc.h
HEADERS     += $${PWD}/xxhash.h

CONFIG(static,static|shared) {
HEADERS     += $${PWD}/lz4frame_static.h
} else {
HEADERS     += $${PWD}/lz4frame.h
DEFINES     += LZ4_DLL_EXPORT=1
}

SOURCES     += $${PWD}/lz4.c
SOURCES     += $${PWD}/xlz4hc.c
SOURCES     += $${PWD}/lz4frame.c
SOURCES     += $${PWD}/xxhash.c
