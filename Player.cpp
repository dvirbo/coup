#include "Player.hpp"
#include "Game.hpp"

using namespace std;
const int MUSTCOUP = 10;
const int COST = 7;
namespace coup
{
    Player::Player(Game &game, string const &name)
    {
        this->_game = &game;
        this->_name = name;
        this->_coins = 0;
        this->_lastAct = "";
        this->_game->_list.push_back(name); // add the name player to the list
    }

 // this function check if this is the turn of the player
    bool Player::check_turn() const 
    {
        string tmp = this->_game->turn();
        if (this->_name == tmp)
        {
            if (this->_coins == MUSTCOUP)
            {
                // need to call coup with some player object.. how to do that?
                // coup()
            }
            return true;
        }
        return false;
    }

    

    void Player::income()
    {
        if (check_turn())
        {
            this->_coins += 1;
            // change the curr player turn:
            this->_game->round();
            this->_lastAct = "income";
            return;
        }
        throw domain_error("this is not the player turn");
    }

    void Player::foreign_aid()
    {
        if (check_turn())
        {
            this->_coins += 2;
            // change the curr player turn:
            this->_game->round();
            this->_lastAct = "foreign_aid";
            return;
        }
        throw domain_error("this is not the player turn");
    }

    void Player::coup(Player &p)
    {
        if (check_turn())
        {

            this->_game->round();
            if (this->_coins < COST)
            {
                throw domain_error("the player dont have enough coins");
                return;
            }

            for (unsigned int i = 0; i < this->_game->_list.size(); i++)
            {
                if (p._name != this->_game->_list[i])
                { //  equals
                    this->_game->_list.erase(this->_game->_list.begin() + i);
                    this->_coins -= COST;
                    this->_lastAct = "coup";
                    this->_enemy.push_back(p);
                    return;
                }
            }
            throw domain_error("the player did not exist in the list");
        }
        throw domain_error("this is not the player turn");
    }

    string Player::role() const
    {
        return this->_roleName;
    }

     int Player::coins() const
    {
        return this->_coins;
    }

} // namespace coup