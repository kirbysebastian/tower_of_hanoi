#include <vector>
#include "Cube.hpp"

class Stack
{
public:
    Stack();

    void add_top(const Cube& cube);
    Cube remove_top();
    Cube& peek_top() const;

    unsigned size() const;

private:
    std::vector<Cube> cubes_;
};

