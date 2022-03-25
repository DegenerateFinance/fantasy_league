TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        admin.cpp \
        main.cpp \
        player.cpp \
        team.cpp \
        user.cpp

HEADERS += \
    admin.hpp \
    player.hpp \
    team.hpp \
    user.hpp
