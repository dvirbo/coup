#include "Assassin.hpp"
using namespace std;

namespace coup
{
    Assassin::Assassin(Game &game, string name) : Player(game, name)
    {
        this->_roleName = "Assassin";
    }

    void Assassin::coup(Player &p)
    {
        if (!check_turn())
        {
            throw domain_error("this is not the player turn");
            return;
        }
        this->_game->round();

        if (this->_coins < 3)
        {
            throw domain_error("Assassin need at least 3 coins to coup");
            return;
        }
        for (unsigned int i = 0; i < this->_game->_list.size(); i++)
        {
            if (p._name.compare(this->_game->_list[i]) == 0)
            { //  equals:
                this->_game->_list.erase(this->_game->_list.begin() + i);
                this->_coins -= 3;
                this->_lastAct = "coup";
                this->_enemy.push_back(p);
                return;
            }
        }
        throw domain_error("the player did not exist in the list");
    }

}