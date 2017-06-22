QT += core
QT -= gui

CONFIG += c++11

TARGET = trafficSimulation
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    edge.cpp \
    graph.cpp

HEADERS += \
    edge.h \
    graph.h
