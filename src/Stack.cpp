#include "Stack.hpp"

Stack::Stack() {}

void Stack::add_top(Cube cube)
{
    cubes_.push_back(cube);
}

void Stack::remove_top()
{
    return cubes_.pop_back();
}

const Cube& Stack::peek_top() const
{
    return cubes_.back();
}

std::vector<Cube> Stack::getCubes()
{
    return cubes_;
}

unsigned Stack::size() const
{
    return 0;
}

