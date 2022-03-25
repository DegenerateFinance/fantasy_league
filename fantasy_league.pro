TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        admin.cpp \
        main.cpp \
        manager.cpp \
        player.cpp \
        privateuserdata.cpp \
        publicuserdata.cpp \
        team.cpp \
        user.cpp

HEADERS += \
    admin.hpp \
    manager.hpp \
    player.hpp \
    privateuserdata.hpp \
    publicuserdata.hpp \
    team.hpp \
    user.hpp
