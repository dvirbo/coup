#include <iostream>
#include <stdexcept>
#include <vector>

namespace coup
{

    class Game
    {
    public:
       Game();

        int cashbox; //how much coins in the box 

        string turn(); //Returns the name of the player whose turn to play 
        vector<string> players();
        string winner();
    };

} 
