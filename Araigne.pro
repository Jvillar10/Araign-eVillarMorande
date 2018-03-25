TEMPLATE = app

QT += qml quick widgets

CONFIG += c++11

SOURCES += main.cpp \
    jeu.cpp \
    text.cpp \
    jetons.cpp \
    joueur.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    jeu.h \
    text.h \
    jetons.h \
    joueur.h

FORMS +=
