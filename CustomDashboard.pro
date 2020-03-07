CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(customdashboardplugin)
TEMPLATE    = lib

HEADERS     = customdashboardplugin.h \
    customdashboard.h
SOURCES     = customdashboardplugin.cpp \
    customdashboard.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(customdashboard.pri)

FORMS += \
    customdashboard.ui
