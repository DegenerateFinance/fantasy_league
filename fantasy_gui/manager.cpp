#include "manager.hpp"

manager::manager()
{
    cout<<"manager created"<<endl;
    this->importAdmins();
}

bool manager::addAdmin(string username, string password)
{
    admins.push_back(new admin(username, password));
    return true;
}

vector<team *> manager::getTeams() const
{
    return teams;
}

void manager::setTeams(const vector<team *> &value)
{
    teams = value;
}

vector<player *> manager::getPlayers() const
{
    return players;
}

void manager::setPlayers(const vector<player *> &value)
{
    players = value;
}

vector<user *> manager::getUsers() const
{
    return users;
}

void manager::setUsers(const vector<user *> &value)
{
    users = value;
}

vector<admin *> manager::getAdmins() const
{
    return admins;
}

void manager::setAdmins(const vector<admin *> &value)
{
    admins = value;
}

void manager::importAdmins()
{
    fstream adminsTXT("textfiles/admins.txt", ios::in | ios::out);
    string line;
    getline(adminsTXT, line);
    cout<<"Line1"<<line<<endl;
    getline(adminsTXT, line);
    cout<<"line2"<<line<<endl;
    getline(adminsTXT, line);
    cout<<"line3"<<line<<endl;

    if (line.compare("\n")==0)
    {
        cout<<"wiiii"<<endl;
    }
    getline(adminsTXT, line);
    cout<<"line4"<<line<<endl;

//    while(line!="\n")
//    {
//        cout<<"importing admins"<<endl;
//        getline(adminsTXT, line);
//    }
}

manager::~manager()
{
    exportAdmins(admins);
}
