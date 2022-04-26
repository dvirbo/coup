#include "Game.hpp"
namespace coup
{
    // init the game
    Game::Game()
    {
        this->curr_player = 0;
    }

    vector<string> Game::players()
    {
        for (unsigned int i = 0; i < this->list.size(); i++)
        {
            cout << list[i] << endl;
        }
        return list;
    }

    string Game::turn()
    {
        return this->list[curr_player];
    }

    string Game::winner()
    {
        if (this->list.size() == 1) // check if there only one player in the list:
        {
            return this->list.at(0);
        }
        else
            throw "the game still occurs";
    }

}
