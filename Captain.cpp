#include "Captain.hpp"
using namespace std;

namespace coup
{
    Captain::Captain(Game &game, string const &name) : Player(game, name)
    { // call the constructor of the Parent class..
        this->_roleName = "Captain";
    }

    /*
    steel 2 coins fron another player
    */
    void Captain::steal(Player &p)
    {
        if (!check_turn())
        {
            throw domain_error("this is not the player turn");
            return;
        }
        this->_game->round();
        if (p._coins < 2)
        {
            throw domain_error("the player dont have enough money to steal");
            return; // check if i need to throw an eror..
        }

        p._coins -= 2;
        this->_coins += 2;
        this->_enemy.push_back(p);
        this->_lastAct = "steal";
    }

    void Captain::block(Player &p)
    {
        string ans = p.role();
        if (ans != "Captain" || p._lastAct != "steal")
        {
            throw domain_error("Captain can't block this player");
            return;
        }

        p._enemy.back()._coins += 2;
        p._coins -= 2;
        p._enemy.pop_back();
        p._lastAct = ""; // to prevent mult blocking...
    }

}
