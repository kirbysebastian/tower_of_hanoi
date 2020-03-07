#pragma once

#include <ostream>

class Cube
{
public:
    Cube(const int& length);
    Cube(const Cube& cube);
    
    int getLength() const;
    int getVolume() const;

    friend std::ostream& operator<<(std::ostream& os, Cube& cube)
    {
        os << cube.getVolume();
        return os;
    }

private:
    int length_;
    int volume_;
};

