cmake_minimum_required(VERSION 3.0.0)
project(TowerOfHanoi VERSION 1.0.0)

add_library(src_lib
    src/Cube.cpp
    src/Game.cpp
    src/Stack.cpp)
target_include_directories(src_lib PUBLIC include)

add_executable(towerofhanoi main.cpp)
target_link_libraries(towerofhanoi src_lib)
