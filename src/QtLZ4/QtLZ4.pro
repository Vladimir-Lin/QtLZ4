NAME         = QtLZ4
TARGET       = $${NAME}
QT           = core
QT          -= gui

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}
HEADERS     += $${PWD}/qtlz4.h

SOURCES     += $${PWD}/qtlz4.cpp

include ($${PWD}/../LZ4/LZ4.pri)
