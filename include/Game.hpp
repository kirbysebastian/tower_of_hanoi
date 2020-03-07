#include <vector>
#include "Stack.hpp"

class Game
{
public:
    Game();
    Game(const unsigned&);

    void solve() const;

private:
    std::vector<Stack> stacks_;
};
