#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <fstream>
#include "user.hpp"

class manager
{
public:
    manager();
    manager(int);
    ~manager();
//protected:

//private:
    vector <player*> players;
    vector <team*> teams;
    vector <user*> users;
    string currentUser;

//
};

#endif // MANAGER_HPP
