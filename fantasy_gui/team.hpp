#ifndef TEAM_HPP
#define TEAM_HPP

#include "player.hpp"
#include <vector>
class team
{
public:

//protected:
    //lineup
    //change lineup
//private:
    team();
    vector <player*> players;
    vector<player *> getPlayers() const;
    void setPlayers(const vector<player *> &value);
};

#endif // TEAM_HPP
