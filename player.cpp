#include "player.hpp"

player::player()
{

}
player::player(string name, unsigned id, int position, bool healthState, float price)
{
    this->name=name;
    this->id=id;
    this->position=position;
    this->healthState=healthState;
    this->price=price;
    this->score=0;
}

string player::getName() const
{
    return name;
}

unsigned player::getId() const
{
    return id;
}

int player::getPosition() const
{
    return position;
}

void player::setPosition(int value)
{
    position = value;
}

bool player::getHealthState() const
{
    return healthState;
}

void player::setHealthState(bool value)
{
    healthState = value;
}

int player::getScore() const
{
    return score;
}

void player::setScore(int value)
{
    score = value;
}

float player::getPrice() const
{
    return price;
}

void player::setPrice(float value)
{
    price = value;
}
