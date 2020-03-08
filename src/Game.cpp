#include "Game.hpp"

Game::Game(const unsigned& stack_count) :
    stackCount_(stack_count)
{
    generateStacks();
}

void Game::solve()
{
    while (stacks_[2].size() != 4)
    {
        move(0, 1);
        move(0, 2);
        move(1, 2);
    }
}

void Game::move(unsigned a, unsigned b)
{
    if (stacks_[a].size() != 0 && (stacks_[b].size() == 0 || stacks_[b].peek_top().getVolume() > stacks_[a].peek_top().getVolume()) )
    {
        stacks_[b].add_top(stacks_[a].peek_top());
        stacks_[a].remove_top();
    }
    else if (stacks_[b].size() != 0 && (stacks_[a].size() == 0 || stacks_[a].peek_top().getVolume() > stacks_[b].peek_top().getVolume()) )
    {
        stacks_[a].add_top(stacks_[b].peek_top());
        stacks_[b].remove_top();
    }
}

const std::vector<Stack>& Game::getStacks() const
{
    return stacks_;
}

void Game::generateStacks()
{
    // Default state of the game
    Cube c4(4), c3(3), c2(2), c1(1);
    Stack stack;
    stack.add_top(c4);
    stack.add_top(c3);
    stack.add_top(c2);
    stack.add_top(c1);
    stacks_.push_back(stack);
    stacks_.push_back(Stack());
    stacks_.push_back(Stack());
}

