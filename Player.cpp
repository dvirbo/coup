#include "Player.hpp"
#include "Game.hpp"

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
    // this function check if this is the turn of the player
    bool Player::check_turn()
    {
        if (this->_name.compare(this->_game->turn()) == 0)
        {
            if (this->_coins == 10)
            {
                // need to call coup with some player object.. how to do that?
                // coup()
            }
            return true;
        }
        else
        {
            return false;
        }
    }

    void Player::income()
    {
        if (check_turn())
        {
            this->_coins += 1;
            // change the curr player turn:
            this->_game->_curr = (this->_game->_curr + 1) % this->_game->_list.size();
            return;
        }
        throw "this is not the player turn";
    }

    void Player::foreign_aid()
    {
        if (check_turn())
        {
            this->_coins += 2;
            // change the curr player turn:
            this->_game->_curr = (this->_game->_curr + 1) % this->_game->_list.size();
            return;
        }
        throw "this is not the player turn";
    }

    void Player::coup(Player p)
    {
        if (check_turn)
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
        throw "this is not the player turn";
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
