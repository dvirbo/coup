#include "Ambassador.hpp"
using namespace std;

namespace coup
{
    Ambassador::Ambassador(Game &game, string name) : Player(game, name)
    {
        this->_roleName = "Ambassador";
    }

    void Ambassador::block(Player &p)
    {
        string ans = p._roleName;
        // check if the Player is the Captain and if the last act was steal..
        if (ans.compare("Captain") != 0 || p._lastAct.compare("steal") != 0)
        {
            throw domain_error("eror of input");
            return;
        }
        else
        {
            p._enemy.back()._coins += 2;
            p._coins -= 2;
            p._enemy.pop_back();
            p._lastAct = ""; // to prevent mult blocking...
        }
    }
    // transfers 1 coin from a to b
    void Ambassador::transfer(Player &a, Player &b)
    {
        if (!check_turn())
        {
            throw domain_error("this is not the player turn");
            return;
        }
        this->_game->round();
        if (a._coins == 0)
        {
            throw domain_error("player a don't have any money");
            this->_lastAct = "";
            return;
        }
        else
        {
            a._coins--;
            b._coins++;
            this->_lastAct = "transfer";
        }
    }

}