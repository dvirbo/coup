#include "Contessa.hpp"
using namespace std;

namespace coup
{
    Contessa::Contessa(Game &game, string name) : Player(game, name)
    { // call the constructor of the Parent class..
    }

    void Contessa::block(Player p) // block the Assassin
    {
        // check if the player that block is the Assassin - he is the only one that can blocked by Contessa
        string checkRole = p.role();
        if (checkRole.compare("Assassin") == 0)
        {
            /* 
            need to restore the coup :
             restore the player

            */
        }
    }

}
