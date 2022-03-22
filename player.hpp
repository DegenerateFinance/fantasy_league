#ifndef PLAYER_HPP
#define PLAYER_HPP


class player
{
public:


//protected:

    player(float, int);
//private:
    float price;
    float getPrice() const;
    void setPrice(float value);
    int score;
    int getScore() const;
    void setScore(int value);

    player();
};

#endif // PLAYER_HPP
