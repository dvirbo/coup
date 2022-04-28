#include "doctest.h"

#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

#include <exception>

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

TEST_CASE("COUP"){
   Game game_1();
   Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
   


    
}