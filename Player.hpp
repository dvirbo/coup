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
        Player(Game &game, string const &name);
        void income();      // +1 from the cashbox
        void foreign_aid(); // +2 from the cashbox
        void coup(Player &p);
         string role() const; // return the role of the player
         int coins() const;   // return the numbers of coins of the player
         bool check_turn() const;
    };

}