#pragma once
#include <vector>
#include <ostream>
#include "Stack.hpp"

class Game
{
public:
    Game(const unsigned&);

    void solve();
    const std::vector<Stack>& getStacks() const;

    friend std::ostream& operator<<(std::ostream& os, Game& game)
    {
        for (auto& stack : game.getStacks())
        {
            os << "Stack:\n";
            const auto& cubes = stack.getCubes();
            for (auto iter = cubes.rbegin(); iter != cubes.rend(); ++iter)
            {
                os << "\t" << iter->getVolume() << "\n";
            }

            os << "\n\n";
        }

        return os;
    }
private:
    void generateStacks();
    void move(unsigned, unsigned);

    unsigned stackCount_;
    std::vector<Stack> stacks_;
};

