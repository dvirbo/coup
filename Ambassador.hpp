#include <iostream>
#include <stdexcept>
#include <vector>
#include <Game.hpp>

namespace coup
{
    class Ambassador : public Player
    {
    public:
        Ambassador(Game &game, string name); // constuctor
        void block(Player p);
        void transfer(Player a, Player b);
    };
}
