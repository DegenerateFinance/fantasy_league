#ifndef ADMIN_HPP
#define ADMIN_HPP
#include <iostream>
#include <vector>
using namespace std;

class admin
{
public:

//protected:
    admin(string, string);

    string getId() const;

    string getUsername() const;
    void setUsername(const string &value);

    string getPassword() const;
    void setPassword(const string &value);
//private:
    string id;
    string username;
    string password;


    admin();


};

#endif // ADMIN_HPP
