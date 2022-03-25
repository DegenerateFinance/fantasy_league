#ifndef MANAGER_HPP
#define MANAGER_HPP
#include "user.hpp"

class manager
{
public:
    manager();

//protected:

//private:
    vector <player*> players;
    vector <team*> teams;
    vector <user*> users;
    string currentUser;

//
};

#endif // MANAGER_HPP
