#-------------------------------------------------
#
# Project created by QtCreator 2016-11-08T23:45:50
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SomeLib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    congratswindow.cpp\
    puzzleform.cpp \
    scoremanager.cpp \
    puzbutton.cpp \
    puzzleengine.cpp \
    scorekeeper.cpp \
    orderkeeper.cpp \
    congratulator.cpp \
    scorehandler.cpp


HEADERS  += \
    congratswindow.h\
    scoremanager.h \
    puzzleform.h \
    puzbutton.h \
    puzzleengine.h \
    scorekeeper.h \
    orderkeeper.h \
    congratulator.h \
    scorehandler.h


FORMS    += \
    congratswindow.ui\
    puzzleform.ui


RESOURCES += \
    scoreboard.qrc
