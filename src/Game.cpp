#include <iostream>
#include "Game.hpp"

Game::Game(const unsigned& stack_count) :
    stackCount_(stack_count)
{
    //stacks_.reserve(stackCount_);
    generateStacks();
    std::cout << stacks_.size() << std::endl;
}

void Game::solve() const
{
    return;
}

std::vector<Stack> Game::getStacks()
{
    return stacks_;
}

void Game::generateStacks()
{
    Cube c4(4), c3(3), c2(2), c1(1);
    stacks_[0].add_top(c4);
    stacks_[0].add_top(c3);
    stacks_[0].add_top(c2);
    stacks_[0].add_top(c1);
}

