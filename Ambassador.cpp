#include "Ambassador.hpp"
using namespace std;

namespace coup
{
    Ambassador::Ambassador(Game &game, string name) : Player(game, name)
    { // call the constructor of the Parent class..
    }

    void coup(Player p)
    { 

        cout << "ocup by Ambassador" << endl;
    }

    void transfer(Player a, Player b)
    {
        cout << "transfer from " << a._name << "to" << b._name << endl;
    }

}