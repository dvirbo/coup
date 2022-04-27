#include "Captain.hpp"
using namespace std;

namespace coup
{
    Captain::Captain(Game &game, string name) : Player(game, name)
    { // call the constructor of the Parent class..
    }

    void block(Player p)
    {

        cout << "block by Captain" << endl;
    }

    void coup(Player p)
    {
        cout << p._name << "coup by Captain" << endl;
    }
    void steal(Player a)
    {
        cout << "steal from" << a._name << "by Captain" << endl;
    }

}
