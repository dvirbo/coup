#include "Game.hpp"
#include <string>
#include <stdexcept>

using namespace std;
namespace coup{
    class Player
    {
    public:
        string _name;
        int _coins;
        Game* _game;
        Player(Game &game, string name);
        void income(); // +1 from the cashbox
        void foreign_aid(); // +2 from the cashbox
        void coup(Player p); //
        string role(); //return the role of the player
        int coins();  //return the numbers of coins of the player
    };
    
}