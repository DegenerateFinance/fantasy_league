#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <fstream>
#include "user.hpp"
#include "admin.hpp"

void exportAdmins(vector<admin*>);

class manager
{
public:
    manager();
    manager(int);
    ~manager();
//protected:


    bool addUser();
    bool addAdmin(string, string);
//private:
    vector <player*> players;
    vector <team*> teams;
    vector <user*> users;
    vector <admin*> admins;
    string currentUser;

//
};

#endif // MANAGER_HPP
