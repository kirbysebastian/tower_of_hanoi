#include "Cube.hpp"

Cube::Cube(const int& length) : length_(length)
{
    volume_ = length_ * 3;
}

int Cube::getLength() const
{
    return length_;
}

int Cube::getVolume() const
{
    return volume_;
}

