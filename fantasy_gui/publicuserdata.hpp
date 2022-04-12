#ifndef PUBLICUSERDATA_HPP
#define PUBLICUSERDATA_HPP
#include "team.hpp"


class publicUserData
{
public:
    publicUserData();

//protected:

//private:
    string id;
    string getId() const;
    void setId(const string &value);

    string username;
    string getUsername() const;
    void setUsername(const string &value);

    team* myTeam;
    team *getUserTeam() const;
    void setUserTeam(team *value);
};

#endif // PUBLICUSERDATA_HPP
