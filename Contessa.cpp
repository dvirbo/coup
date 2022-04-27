#include "Contessa.hpp"
using namespace std;

namespace coup
{
    Contessa::Contessa(Game &game, string name) : Player(game, name)
    { // call the constructor of the Parent class..
    }

    void block(Player p)
    { // block the Assassin

        cout << "block by Contessa" << endl;
    }

    void coup(Player p)
    {
        cout << p._name << "coup by Contessa" << endl;
    }


}
