#include "publicuserdata.hpp"

publicUserData::publicUserData()
{

}

team *publicUserData::getUserTeam() const
{
    return userTeam;
}

void publicUserData::setUserTeam(team *value)
{
    userTeam = value;
}

string publicUserData::getUsername() const
{
    return username;
}

void publicUserData::setUsername(const string &value)
{
    username = value;
}

string publicUserData::getId() const
{
    return id;
}

void publicUserData::setId(const string &value)
{
    id = value;
}
