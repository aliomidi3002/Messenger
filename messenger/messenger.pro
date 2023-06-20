QT += core gui widgets
FORMS += \
    signup.ui \
    starterwindow.ui
CONFIG += c++17

# Uncomment the following line to disable deprecated APIs before Qt 6.0.0
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

SOURCES += \
    main.cpp \
    signup.cpp \
    starterwindow.cpp

HEADERS += \
    signup.h \
    starterwindow.h

FORMS += \
    starterwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
