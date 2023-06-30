QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatpage.cpp \
    editprofile.cpp \
    login.cpp \
    logout.cpp \
    main.cpp \
    mainwindow.cpp \
    newchannel.cpp \
    newgroup.cpp \
    signup.cpp

HEADERS += \
    ID.h \
    chatpage.h \
    editprofile.h \
    login.h \
    logout.h \
    mainwindow.h \
    newchannel.h \
    newgroup.h \
    signup.h \
    text_chat.h

FORMS += \
    chatpage.ui \
    editprofile.ui \
    login.ui \
    logout.ui \
    mainwindow.ui \
    newchannel.ui \
    newgroup.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
