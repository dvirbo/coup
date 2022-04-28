#include "Game.hpp"
namespace coup

{
    // init the index of the first player
    Game::Game()
    {
        this->_curr = 0;
    }

    vector<string> Game::players()
    {
        // for (unsigned int i = 0; i < this->_list.size(); i++)
        // {
        //     cout << _list[i] << endl;
        // }
        return _list;
    }

    string Game::turn()
    {
        return this->_list[_curr];
    }

    string Game::winner()
    {
        if (this->_list.size() == 1) // check if there only one player in the list:
        {
            return this->_list.at(0);
        }
        else
            throw "the game still occurs";
    }
    void Game::round()
    {
        this->_curr = (this->_curr + 1) % this->_list.size();
    }
}
