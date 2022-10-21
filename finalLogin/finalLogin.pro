QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Invoice.cpp \
    checkoutDialog.cpp \
    customerDialog.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS += \
    Invoice.h \
    MainWindow.h \
    checkoutDialog.h \
    customerDialog.h

FORMS += \
    Invoice.ui \
    MainWindow.ui \
    checkoutDialog.ui \
    customerDialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Fleet IMG(JFIF)/large1.jfif \
    Fleet IMG(JFIF)/large1.jfif \
    Fleet IMG(JFIF)/large1.jfif \
    Fleet IMG(JFIF)/large1.jfif \
    Fleet IMG(JFIF)/large3.jfif \
    Fleet IMG(JFIF)/large3.jfif \
    Fleet IMG(JFIF)/large3.jfif \
    Fleet IMG(JFIF)/large5.jfif \
    Fleet IMG(JFIF)/large5.jfif \
    Fleet IMG(JFIF)/large5.jfif \
    Fleet IMG(JFIF)/lb1.jfif \
    Fleet IMG(JFIF)/lb1.jfif \
    Fleet IMG(JFIF)/lb1.jfif \
    Fleet IMG(JFIF)/lb2.jfif \
    Fleet IMG(JFIF)/lb2.jfif \
    Fleet IMG(JFIF)/lb2.jfif \
    Fleet IMG(JFIF)/ms1.jfif \
    Fleet IMG(JFIF)/ms1.jfif \
    Fleet IMG(JFIF)/ms1.jfif \
    Fleet IMG(JFIF)/ms2.jfif \
    Fleet IMG(JFIF)/ms2.jfif \
    Fleet IMG(JFIF)/ms2.jfif \
    Fleet IMG(JFIF)/sms1.png \
    Fleet IMG(JFIF)/sms1.png \
    Fleet IMG(JFIF)/sms1.png \
    Fleet IMG(JFIF)/sms2.jfif \
    Fleet IMG(JFIF)/sms2.jfif \
    Fleet IMG(JFIF)/sms2.jfif
