#include <iostream>
#include <stdexcept>
#include <vector>
#include <Game.hpp>


namespace coup
{
    class Assassin : public Player
    {
    public:
        Assassin(Game &game, string name); //constuctor
    };
}