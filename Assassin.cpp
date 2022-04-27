#include "Assassin.hpp"
using namespace std;

namespace coup
{
    Assassin::Assassin(Game &game, string name) : Player(game, name) {}

    void Assassin::coup(Player p)
    {
        if (!check_turn)
        {
            throw "this is not the player turn";
            return;
        }

        if (this->_coins < 3)
        {
            throw "Assassin need at least 3 coins to coup";
            return;
        }
        for (unsigned int i = 0; i < this->_game->_list.size(); i++)
        {
            if (p._name.compare(this->_game->_list[i]) == 0)
            { //  equals:
                this->_game->_list.erase(this->_game->_list.begin() + i);
                this->_coins -= 3;
                this->_game->_curr = (this->_game->_curr + 1) % this->_game->_list.size();
                return;
            }
        }
        throw "the player did not exist in the list";
    }

}