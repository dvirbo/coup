#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
#pragma once

namespace coup
{

    class Player;
    class Game
    {
    public:
        Game();
        unsigned int _curr;       // index of the current player
        vector<string> _list;     // list that contain the names of the players  ~~ change it..
        string turn();            // Returns the name of the player whose turn to play
        vector<string> players() const; // returns the names of the players who are active in the game.
        string winner();          // returns the name of the winner. If the game is still active, the method will throw an error.
        void round();             // change the index of the curr player to the next one
    };

}
