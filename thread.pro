#-------------------------------------------------
#
# Project created by QtCreator 2018-08-20T15:35:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = thread
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    threadfromqthread.cpp

HEADERS  += mainwindow.h \
    threadfromqthread.h

FORMS    += mainwindow.ui
