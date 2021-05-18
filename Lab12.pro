QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dividebyzeroexception.cpp \
    exception.cpp \
    logger.cpp \
    main.cpp \
    lab12.cpp \
    negativelogexception.cpp \
    negativesquareexception.cpp \
    outofboundsexception.cpp \
    overflowexception.cpp \
    vyraz.cpp \
    wronginputexception.cpp

HEADERS += \
    Exceptions.h \
    dividebyzeroexception.h \
    exception.h \
    lab12.h \
    logger.h \
    negativelogexception.h \
    negativesquareexception.h \
    outofboundsexception.h \
    overflowexception.h \
    vyraz.h \
    wronginputexception.h

FORMS += \
    lab12.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
