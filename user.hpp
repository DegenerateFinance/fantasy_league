#ifndef USER_HPP
#define USER_HPP
#include <iostream>
#include <vector>
using namespace std;

#include "team.hpp"
class user
{
public:
    user();
//protected:
    user(string, string, string, float);
//private:
    string id;
    string username;
    string password;
    team* userTeam;
    float liquidCash;
};

#endif // USER_HPP
