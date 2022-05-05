#-------------------------------------------------
#
# Project created by QtCreator 2022-03-21T00:27:07
#
#-------------------------------------------------

QT       += core gui serialbus

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VectorCANDemo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        bitratebox.cpp \
        computefactorialthread.cpp \
        connectdialog.cpp \
        main.cpp \
        mainwindow.cpp \
        receiverworker.cpp \
        senderworker.cpp \
        worker.cpp

HEADERS += \
        bitratebox.h \
        computefactorialthread.h \
        connectdialog.h \
        mainwindow.h \
        receiverworker.h \
        senderworker.h \
        worker.h

FORMS += \
        connectdialog.ui \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    vectorcan.qrc
