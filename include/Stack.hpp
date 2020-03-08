#pragma once

#include <vector>
#include "Cube.hpp"

class Stack
{
public:
    Stack();
    Stack(const Stack&);

    void add_top(Cube cube);
    void remove_top();
    const Cube& peek_top() const;

    const std::vector<Cube>& getCubes() const;
    unsigned size() const;

private:
    std::vector<Cube> cubes_;
};

