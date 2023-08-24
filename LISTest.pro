QT = core \
    quick \
    widgets

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        adminoverdue.cpp \
        adminpreorderedbooks.cpp \
        adminviewstatus.cpp \
        adminviewstatusreturn.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    adminoverdue.h \
    adminpreorderedbooks.h \
    adminviewstatus.h \
    adminviewstatusreturn.h

FORMS += \
    adminoverdue.ui \
    adminpreorderedbooks.ui \
    adminpreorderedbooks.ui \
    adminviewstatus.ui \
    adminviewstatusreturn.ui

RESOURCES += \
    Resources.qrc
