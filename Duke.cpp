#include "Duke.hpp"
using namespace std;

namespace coup
{
    Duke::Duke(Game &game, string name) : Player(game, name)
    { // call the constructor of the Parent class..
    }

    void block(Player p)
    {

        cout << "block by Duke" << endl;
    }

    void tax()
    {
        cout << "Duke geting tax" << endl;
    }
    
    void coup(Player p)
    {
        cout << p._name << "coup by Duke" << endl;
    }

}
