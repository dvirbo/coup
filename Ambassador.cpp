#include "Ambassador.hpp"
using namespace std;

namespace coup
{
    Ambassador::Ambassador(Game &game, string name) : Player(game, name)
    {
    }

    void Ambassador::block(Player p)
    {

        cout << p._name << "block by Ambassador" << endl;
    }

    void Ambassador::transfer(Player a, Player b)
    {
        if (!check_turn)
        {
            throw "this is not the player turn";
            return;
        }
        cout << "transfer from " << a._name << "to" << b._name << endl;
    }

}