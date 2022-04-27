#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

namespace coup
{
    class Ambassador : public Player
    {
    public:
        Ambassador(Game &game, string name); // constuctor
        void block(Player p); // prevent the steel
        void transfer(Player a, Player b);
    };
}
