#include "Player.hpp"

using namespace std;
namespace coup
{
    Player::Player(Game &game, string name)
    {
        this->_game = &game;
        this->_name = name;
        this->_coins = 0;
        this->_game->_list.push_back(name); // add the name player to the list
    }
    void Player::income()
    {
        this->_coins += 1;
        // change the curr player turn
        this->_game->_curr = (this->_game->_curr + 1) % this->_game->_list.size();
    }

    void Player::foreign_aid()
    {
        this->_coins += 2;
        // change the curr player turn
        this->_game->_curr = (this->_game->_curr + 1) % this->_game->_list.size();
    }

    void Player::coup(Player p)
    {
        if (this->_coins < 7)
        {
            throw "the player dont have enough coins";
            return;
        }

        for (unsigned int i = 0; i < this->_game->_list.size(); i++)
        {
            if (p._name.compare(this->_game->_list[i]) == 0)
            { //  equals
                this->_game->_list.erase(this->_game->_list.begin() + i);
                this->_coins -= 7;
                this->_game->_curr = (this->_game->_curr + 1) % this->_game->_list.size();
                return;
            }
        }
        throw "the player did not exist in the list";
    }

    string Player::role()
    {
        return this->_name;
    }

    int Player::coins()
    {
        return this->_coins;
    }

} // namespace coup
