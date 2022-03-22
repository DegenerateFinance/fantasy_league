#include <iostream>

#include "player.hpp"
using namespace std;

int main()
{
    player rchone(999.551, 555);

    cout << "My price is: "<<rchone.getPrice()<<"\nMy score is: " << rchone.getScore()<< endl;


    return 0;
}
