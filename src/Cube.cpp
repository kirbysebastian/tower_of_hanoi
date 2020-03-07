#include "Cube.hpp"

Cube::Cube(const int& length) : length_(length)
{
    volume_ = length_ * 3;
}

Cube::Cube(const Cube& c)
{
    length_ = c.length_;
    volume_ = c.volume_;
}

int Cube::getLength() const
{
    return length_;
}

int Cube::getVolume() const
{
    return volume_;
}

