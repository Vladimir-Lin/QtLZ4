NAME         = QtLZ4
TARGET       = $${NAME}
QT           = core
QT          -= gui

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}
HEADERS     += $${PWD}/qtlz4.h

CONFIG(static,static|shared) {
} else {
DEFINES     += LZ4_DLL_EXPORT=1
}

include ($${PWD}/../LZ4/LZ4.pri)

SOURCES     += $${PWD}/lz4.c
SOURCES     += $${PWD}/lz4frame.c
SOURCES     += $${PWD}/xxhash.c
SOURCES     += $${PWD}/xlz4hc.c

SOURCES     += $${PWD}/qtlz4.cpp
