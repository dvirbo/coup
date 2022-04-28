#include "Contessa.hpp"
using namespace std;

namespace coup
{
    Contessa::Contessa(Game &game, string name) : Player(game, name)
    { // call the constructor of the Parent class..
            this->_roleName = "Contessa";

    }

    void Contessa::block(Player p) // block the Assassin
    {
        // check if the player that block is the Assassin - he is the only one that can blocked by Contessa
        string checkRole = p._roleName;
        if (checkRole.compare("Assassin") != 0 || p._lastAct.compare("coup") != 0)
        {
            throw domain_error("Contessa can't block this player");
            return;
        }
        else
        {
            this->_game->_list.push_back(p._enemy.back()._name); //restore the blocked player name to the list
        }
    }

}
