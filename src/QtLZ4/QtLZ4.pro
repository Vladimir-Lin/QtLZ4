NAME         = QtLZ4
TARGET       = $${NAME}
QT           = core
QT          -= gui
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/QtLZ4

HEADERS     += $${PWD}/../../include/QtLZ4/QtLZ4
HEADERS     += $${PWD}/../../include/QtLZ4/qtlz4.h

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

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)
