#include "Player.hpp"

using namespace std;
namespace coup{
    class Duke : public Player
    {

    public:
        Duke(Game &game, string name);
        void block(Player p);
        void tax();
      //  int coins();
    };
}
