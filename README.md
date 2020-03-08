# Tower Of Hanoi Problem
![](https://github.com/kirbysebastian/tower_of_hanoi/blob/master/img/Tower_of_Hanoi.jpeg)

C++ program solving the Tower of Hanoi Problem

## Problem
The game consists of three rods and a number of disks of different sizes, which can slide onto any rod.
The puzzle starts with the disks in a neat stack in ascending order of size on one rod, the smallest at the top, thus making a conical shape.

## Game Objective
The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:
    - Only one disk can be moved at a time.
    - Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.
    - No larger disk may be placed on top of a smaller disk.

With 3 disks, the puzzle can be solved in 7 moves.
The minimal number of moves required to solve a Tower of Hanoi puzzle is 2n − 1, where n is the number of disks. 

![](https://github.com/kirbysebastian/tower_of_hanoi/blob/master/img/Tower_of_Hanoi_4.gif)

## Requirements
- Linux Environment
- CMake 3.0.0 (minimum)
- make

## Installation
- chmod +x install.sh
- ./insall.sh

## Usage
- ./build/towerofhanoi

## TODOs
- ~~Create a bash install script~~
- Create unit tests
- Setup travis-ci
- Dynamic solution solver
- Game problem creator

## References
- ![Wikipedia](https://en.wikipedia.org/wiki/Tower_of_Hanoi)
