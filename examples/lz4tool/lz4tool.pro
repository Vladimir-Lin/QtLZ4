QT             = core
QT            -= gui
QT            += QtLZ4

CONFIG        += console

TEMPLATE       = app

SOURCES       += $${PWD}/lz4tool.cpp

win32 {
RC_FILE        = $${PWD}/lz4tool.rc
OTHER_FILES   += $${PWD}/lz4tool.rc
OTHER_FILES   += $${PWD}/*.js
}
