#pragma once
#include <vector>
#include <ostream>
#include "Stack.hpp"

class Game
{
public:
    Game(const unsigned&);

    void solve() const;
    std::vector<Stack> getStacks();

    friend std::ostream& operator<<(std::ostream& os, Game& game)
    {
        for (auto& stack : game.getStacks())
        {
            os << "Stack:\n";
            for (auto& cube : stack.getCubes())
            {
                os << "\t" << cube << "\n";
            }

            os << "\n\n";
        }

        return os;
    }
private:
    void generateStacks();

    unsigned stackCount_;
    std::vector<Stack> stacks_;
};

