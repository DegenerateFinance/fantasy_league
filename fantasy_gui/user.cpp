#include "user.hpp"

user::user()
{

}
user::user(string id,string username, string password, float initialCash)
{
    this->id=id;
    this->username=username;
    this->password=password;
    this->liquidCash=initialCash;
}
