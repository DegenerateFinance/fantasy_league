#ifndef USER_HPP
#define USER_HPP
#include "publicuserdata.hpp"
#include "privateuserdata.hpp"

class user: public publicUserData, public privateUserData
{
public:
    user();
//protected:
    user(string, string, string, float);

//private:


};

#endif // USER_HPP
