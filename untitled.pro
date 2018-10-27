TEMPLATE = app
TARGET = Benotinator

QT = core gui
QT += widgets
QT += core gui sql

SOURCES += \
    main.cpp \
    mainframe.cpp \
    dbmanager.cpp

HEADERS += \
    mainframe.h \
    dbmanager.h
