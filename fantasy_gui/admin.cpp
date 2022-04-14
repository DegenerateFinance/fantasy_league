#include "admin.hpp"

admin::admin()
{

}
admin::admin(string username, string password)
{
    this->username=username;
    this->password=password;
}

string admin::getUsername() const
{
    return username;
}

void admin::setUsername(const string &value)
{
    username = value;
}

string admin::getPassword() const
{
    return password;
}

void admin::setPassword(const string &value)
{
    password = value;
}

string admin::getId() const
{
    return id;
}

