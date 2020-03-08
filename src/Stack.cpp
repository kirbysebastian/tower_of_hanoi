#include "Stack.hpp"

Stack::Stack() {}

Stack::Stack(const Stack& stack)
{
    cubes_ = stack.getCubes();
}

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

const std::vector<Cube>& Stack::getCubes() const
{
    return cubes_;
}

unsigned Stack::size() const
{
    return cubes_.size();
}

