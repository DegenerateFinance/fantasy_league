#ifndef PRIVATEUSERDATA_HPP
#define PRIVATEUSERDATA_HPP

#include <iostream>
using namespace std;

class privateUserData
{
public:
    privateUserData();

//protected:

//private:

    string password;
    string getPassword() const;
    void setPassword(const string &value);
    float liquidCash;
    float getLiquidCash() const;
    void setLiquidCash(float value);
};

#endif // PRIVATEUSERDATA_HPP
