#include "Captain.hpp"
using namespace std;

namespace coup
{
    Captain::Captain(Game &game, string name) : Player(game, name)
    { // call the constructor of the Parent class..
    }

    void Captain::steal(Player p)
    {
        if (!check_turn)
        {
            throw "this is not the player turn";
            return;
        }
        cout << "steal from" << p._name << "by Captain" << endl;
    }

    void Captain::block(Player p)
    {
        cout << "block by Captain" << endl;
    }

}
