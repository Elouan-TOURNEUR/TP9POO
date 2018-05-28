TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    date.cpp \
    message.cpp \
    publicmessage.cpp

HEADERS += \
    date.h \
    message.h \
    publicmessage.h
