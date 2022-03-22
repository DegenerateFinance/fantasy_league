#include "player.hpp"

player::player()
{

}
player::player(float price, int score)
{
    this->price=price;
    this->score=score;
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
