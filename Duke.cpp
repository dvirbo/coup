#include "Duke.hpp"
using namespace std;

namespace coup
{
    Duke::Duke(Game &game, string name) : Player(game, name)
    { // call the constructor of the Parent class..
    }

    void Duke::block(Player p)
    {

        cout << "block by Duke" << endl;
    }

    void Duke::tax()
    {
        if (!check_turn)
        {
            throw "this is not the player turn";
            return;
        }
        this->_coins += 3;
    }

}
