#include "Assassin.hpp"
using namespace std;

namespace coup
{
    Assassin::Assassin(Game &game, string name) : Player(game, name)
    { // call the constructor of the Parent class..
    }

    void coup(Player p)
    { // with only 3 coins..

        cout << "Assassin" <<endl;
    }

}