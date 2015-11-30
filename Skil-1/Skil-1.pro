QT += core
QT -= gui

TARGET = Skil-1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    computerscientist.cpp \
    search.cpp \
    sort.cpp

HEADERS += \
    computerscientist.h \
    search.h \
    sort.h

