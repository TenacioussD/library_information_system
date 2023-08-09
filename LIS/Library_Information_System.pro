QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admincatalogue.cpp \
    adminhome.cpp \
    adminlogin.cpp \
    main.cpp \
    login.cpp \
    memberhome.cpp \
    memberlogin.cpp

HEADERS += \
    admincatalogue.h \
    adminhome.h \
    adminlogin.h \
    login.h \
    memberhome.h \
    memberlogin.h

FORMS += \
    admincatalogue.ui \
    adminhome.ui \
    adminlogin.ui \
    login.ui \
    memberhome.ui \
    memberlogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    images/library.jpg \
    images/logo - Copy.png \
    images/logo - Copy.png \
    images/logo.png

RESOURCES += \
    Resources.qrc
