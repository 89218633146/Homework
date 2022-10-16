TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    Board.cpp \
    Game.cpp \
    Politra.cpp \
    main.cpp


HEADERS += \
    Board.h \
    Game.h \
    Politra.h


LIBS += -L$$PWD/../../../../PDCurses/libcurses/ -lcurses


INCLUDEPATH += $$PWD/../../../../PDCurses/libcurses
DEPENDPATH += $$PWD/../../../../PDCurses/libcurses
