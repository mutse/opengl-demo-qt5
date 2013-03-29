
TEMPLATE = app
TARGET = solid-demo
DEPENDPATH += .
INCLUDEPATH += .

QT += opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# Input
HEADERS += tetrah.h view.h \
    solid.h \
    cube.h \
    factory.h
SOURCES += main.cpp view.cpp tetrah.cpp \
    cube.cpp \
    factory.cpp
