#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
#pragma once

namespace coup
{

    class Game
    {
    public:
        Game();

        unsigned int _curr;   // index of the current player
        int cashbox;          // how much coins in the box  ??
        vector<string> _list; // list that contain the names of the players

        string turn();            // Returns the name of the player whose turn to play
        vector<string> players(); // returns the names of the players who are active in the game.
        string winner();          // returns the name of the winner. If the game is still active, the method will throw an error.
    };

}
