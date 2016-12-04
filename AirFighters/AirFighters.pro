#-------------------------------------------------
#
# Project created by    Ambr3ll
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AirFighters
TEMPLATE = app


SOURCES += main.cpp \
    game.cpp \
    health.cpp \
    score.cpp \
    bullet.cpp \
    enemy.cpp \
    player.cpp

HEADERS  += \
    game.h \
    health.h \
    score.h \
    bullet.h \
    enemy.h \
    player.h

RESOURCES += \
    res.qrc
