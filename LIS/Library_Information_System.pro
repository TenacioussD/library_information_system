QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += sql

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminaddbook.cpp \
    adminbookconfirmation.cpp \
    admincatalogue.cpp \
    admineditbookdialog.cpp \
    adminenterbookupdate.cpp \
    adminhome.cpp \
    adminlogin.cpp \
    adminmanagebooks.cpp \
    adminupdatebook.cpp \
    globalinstances.cpp \
    main.cpp \
    login.cpp \
    membercatalogue.cpp \
    memberhome.cpp \
    memberlogin.cpp \
    membermembership.cpp \
    memberoverdue.cpp \
    memberpreorder.cpp

HEADERS += \
    adminaddbook.h \
    adminbookconfirmation.h \
    admincatalogue.h \
    admineditbookdialog.h \
    adminenterbookupdate.h \
    adminhome.h \
    adminlogin.h \
    adminmanagebooks.h \
    adminupdatebook.h \
    globalinstances.h \
    login.h \
    membercatalogue.h \
    memberhome.h \
    memberlogin.h \
    membermembership.h \
    memberoverdue.h \
    memberpreorder.h

FORMS += \
    adminaddbook.ui \
    adminbookconfirmation.ui \
    admincatalogue.ui \
    admineditbookdialog.ui \
    adminenterbookupdate.ui \
    adminhome.ui \
    adminlogin.ui \
    adminmanagebooks.ui \
    adminupdatebook.ui \
    login.ui \
    membercatalogue.ui \
    memberhome.ui \
    memberlogin.ui \
    membermembership.ui \
    memberoverdue.ui \
    memberpreorder.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    images/Icons/back.png \
    images/library.jpg \
    images/logo - Copy.png \
    images/logo - Copy.png \
    images/logo.png

RESOURCES += \
    Resources.qrc
