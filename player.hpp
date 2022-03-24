#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <iostream>

using namespace std;

class player
{
public:


//protected:

    player(float, int);
//private:
    string name;
    string getName() const;

    unsigned id;
    unsigned getId() const;

    int position;
    int getPosition() const;
    void setPosition(int value);

    bool healthState;
    bool getHealthState() const;
    void setHealthState(bool value);

    float price;
    float getPrice() const;
    void setPrice(float value);

    int score;
    int getScore() const;
    void setScore(int value);


    player();


};

#endif // PLAYER_HPP
