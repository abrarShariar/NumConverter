#-------------------------------------------------
#
# Project created by QtCreator 2016-01-27T02:13:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NumConverter
TEMPLATE = app

CONFIG+=static

SOURCES += main.cpp\
        dialog.cpp \
    calculator.cpp

HEADERS  += dialog.h \
    calculator.h

FORMS    += dialog.ui \
    calculator.ui

