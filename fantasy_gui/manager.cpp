#include "manager.hpp"

manager::manager()
{
    cout<<"manager created"<<endl;
}

bool manager::addAdmin(string username, string password)
{
    admins.push_back(new admin(username, password));
}


manager::~manager()
{
    exportAdmins(admins);
}
