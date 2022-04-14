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
    ~manager();
//protected:


    bool addUser(void);
    bool addAdmin(string, string);
    void importAdmins(void);


    vector<player *> getPlayers() const;
    void setPlayers(const vector<player *> &value);
    vector<team *> getTeams() const;
    void setTeams(const vector<team *> &value);
    vector<user *> getUsers() const;
    void setUsers(const vector<user *> &value);
    vector<admin *> getAdmins() const;
    void setAdmins(const vector<admin *> &value);
//private:
    vector <player*> players;
    vector <team*> teams;
    vector <user*> users;
    vector <admin*> admins;

    string currentUser;
//
};

#endif // MANAGER_HPP
