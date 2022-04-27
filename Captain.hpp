#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

namespace coup
{
    class Captain : public Player
    {
    public:
        Captain(Game &game, string name); // constuctor
        void steal(Player p);
        void block(Player p);
    };
}
