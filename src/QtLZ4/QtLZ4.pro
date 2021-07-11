NAME         = QtLZ4
TARGET       = $${NAME}
QT           = core
QT          -= gui

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}
HEADERS     += $${PWD}/qtlz4.h

HEADERS     += $${PWD}/lz4.h
HEADERS     += $${PWD}/lz4frame.h
HEADERS     += $${PWD}/lz4frame_static.h
HEADERS     += $${PWD}/lz4hc.h
HEADERS     += $${PWD}/xxhash.h

SOURCES     += $${PWD}/qtlz4.cpp
SOURCES     += $${PWD}/lz4.c
OTHER_FILES += $${PWD}/lz4frame.c
OTHER_FILES += $${PWD}/lz4hc.c
SOURCES     += $${PWD}/xxhash.c
