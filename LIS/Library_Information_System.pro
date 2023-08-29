QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += sql

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminaddbook.cpp \
    adminaddmember.cpp \
    adminbookconfirmation.cpp \
    admincatalogue.cpp \
    admineditbookdialog.cpp \
    admineditmember.cpp \
    admineditmemberdetails.cpp \
    adminenterbookupdate.cpp \
    adminhome.cpp \
    adminlogin.cpp \
    adminmanagebooks.cpp \
    adminmembership.cpp \
    adminoverdue.cpp \
    adminpreorderedbooks.cpp \
    adminremovemember.cpp \
    adminremovememconfirm.cpp \
    adminupdatebook.cpp \
    adminviewallmembers.cpp \
    adminviewstatus.cpp \
    adminviewstatusreturn.cpp \
    globalinstances.cpp \
    main.cpp \
    login.cpp \
    membercatalogue.cpp \
    membercatalogueselect.cpp \
    memberhome.cpp \
    memberlogin.cpp \
    membermembership.cpp \
    memberoverdue.cpp \
    memberpreorder.cpp \
    usermanager.cpp

HEADERS += \
    adminaddbook.h \
    adminaddmember.h \
    adminbookconfirmation.h \
    admincatalogue.h \
    admineditbookdialog.h \
    admineditmember.h \
    admineditmemberdetails.h \
    adminenterbookupdate.h \
    adminhome.h \
    adminlogin.h \
    adminmanagebooks.h \
    adminmembership.h \
    adminoverdue.h \
    adminpreorderedbooks.h \
    adminremovemember.h \
    adminremovememconfirm.h \
    adminupdatebook.h \
    adminviewallmembers.h \
    adminviewstatus.h \
    adminviewstatusreturn.h \
    globalinstances.h \
    login.h \
    membercatalogue.h \
    membercatalogueselect.h \
    memberhome.h \
    memberlogin.h \
    membermembership.h \
    memberoverdue.h \
    memberpreorder.h \
    usermanager.h

FORMS += \
    adminaddbook.ui \
    adminaddmember.ui \
    adminbookconfirmation.ui \
    admincatalogue.ui \
    admineditbookdialog.ui \
    admineditmember.ui \
    admineditmemberdetails.ui \
    adminenterbookupdate.ui \
    adminhome.ui \
    adminlogin.ui \
    adminmanagebooks.ui \
    adminmembership.ui \
    adminoverdue.ui \
    adminpreorderedbooks.ui \
    adminremovemember.ui \
    adminremovememconfirm.ui \
    adminupdatebook.ui \
    adminviewallmembers.ui \
    adminviewstatus.ui \
    adminviewstatusreturn.ui \
    login.ui \
    membercatalogue.ui \
    membercatalogueselect.ui \
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
