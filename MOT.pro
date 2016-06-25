#-------------------------------------------------
#
# Project created by QtCreator 2016-06-23T23:14:27
#
#-------------------------------------------------

QT       += core gui\
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MOT
TEMPLATE = app


SOURCES += main.cpp \
    Game.cpp \
    weapon.cpp \
    weapon2.cpp \
    weapon1.cpp \
    player.cpp \
    enemy.cpp \
    diamond.cpp \
    heart.cpp \
    train.cpp \
    person.cpp

HEADERS  += \
    Game.h \
    weapon1.h \
    weapon2.h \
    player.h \
    enemy.h \
    diamond.h \
    heart.h \
    train.h \
    person.h \
    weapon.h

RESOURCES += \
    pix.qrc
