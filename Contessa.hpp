#include <iostream>
#include <stdexcept>
#include <vector>
#include <Game.hpp>


namespace coup
{
    class Contessa : public Player
    {
    public:
        Contessa(Game &game, string name); //constuctor
        void block(Player p);

    };
}


