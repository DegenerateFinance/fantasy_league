#include <iostream>

#include "player.hpp"
#include "user.hpp"
#include "admin.hpp"
using namespace std;

int main()
{
    player rchone(999.551, 555);

    cout << "My price is: "<<rchone.getPrice()<<"\nMy score is: " << rchone.getScore()<< endl;

    user usu1("u123","pepe flores","safupassword", 1000100);

    cout<< usu1.id<<usu1.username<<usu1.password<<usu1.liquidCash;

    return 0;
}
