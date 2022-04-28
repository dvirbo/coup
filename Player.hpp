#include "Game.hpp"
#include <string>
#pragma once

namespace coup
{
    class Game;
    class Player
    {
    public:
        string _name;
        string _roleName;
        int _coins;
        Game *_game;
        string _lastAct; // save the last act of the player
        vector<Player> _enemy;
        Player(Game &game, string name);
        void income();      // +1 from the cashbox
        void foreign_aid(); // +2 from the cashbox
        void coup(Player &p);
        string role(); // return the role of the player
        int coins();   // return the numbers of coins of the player
        bool check_turn();
    };

}