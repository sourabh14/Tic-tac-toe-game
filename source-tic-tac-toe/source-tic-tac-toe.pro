#-------------------------------------------------
#
# Project created by QtCreator 2015-07-12T14:03:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = source-tic-tac-toe
TEMPLATE = app


SOURCES += main.cpp\
        gamewindow.cpp \
    menuform.cpp

HEADERS  += gamewindow.h \
    menuform.h

FORMS    += gamewindow.ui \
    menuform.ui

RESOURCES += \
    Game-resources.qrc
