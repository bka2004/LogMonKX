include(../gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG += thread
#CONFIG -= qt

HEADERS +=     \
    controllermock.h

APP_PATH = ../../../../App/

INCLUDEPATH += $${APP_PATH}

SOURCES +=     main.cpp \
    controllertests.cpp \
    commandlineprocessortests.cpp

SOURCES += $${APP_PATH}commandlineprocessor.cpp \
    $${APP_PATH}filespec.cpp

