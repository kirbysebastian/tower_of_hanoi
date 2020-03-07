#pragma once

#include <vector>
#include "Cube.hpp"

class Stack
{
public:
    Stack();

    void add_top(Cube cube);
    void remove_top();
    const Cube& peek_top() const;

    std::vector<Cube> getCubes();
    unsigned size() const;

private:
    std::vector<Cube> cubes_;
};

