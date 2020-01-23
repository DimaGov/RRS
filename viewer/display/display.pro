DEFINES += DISPLAY_LIB

TEMPLATE = lib

QT += core
QT += gui
QT += widgets
QT += opengl

DESTDIR = ../../../lib

TARGET = display

CONFIG(debug, debug|release) {

    TARGET = $$join(TARGET,,,_d)



} else {


}

INCLUDEPATH += ./include
INCLUDEPATH += ../../common-headers

HEADERS += $$files(./include/*.h) \
    include/display-types.h
SOURCES += $$files(./src/*.cpp)
