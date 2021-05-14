cmake_minimum_required(VERSION 3.17)
project(OOP_ZOO)

set(CMAKE_CXX_STANDARD 14)

add_executable(OOP_ZOO main.cpp Animal.h Cage.h Keeper.cpp Keeper.h Cage.cpp Animal.cpp Visitor.cpp Visitor.h Person.cpp Person.h)