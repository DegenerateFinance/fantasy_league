#include "privateuserdata.hpp"

privateUserData::privateUserData()
{

}

string privateUserData::getPassword() const
{
    return password;
}

void privateUserData::setPassword(const string &value)
{
    password = value;
}

float privateUserData::getLiquidCash() const
{
    return liquidCash;
}

void privateUserData::setLiquidCash(float value)
{
    liquidCash = value;
}
