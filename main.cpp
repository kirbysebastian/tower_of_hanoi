#include <iostream>
#include "include/Game.hpp"

int main()
{
    Game g(3);
    std::cout << "Initial game state.\n" << g << std::endl;
    g.solve();
    std::cout << std::endl << "Game solved!\n" << g << std::endl;
    return 0;
}
