#include "team.hpp"

team::team()
{

}



vector<player *> team::getPlayers() const
{
    return players;
}

void team::setPlayers(const vector<player *> &value)
{
    players = value;
}
