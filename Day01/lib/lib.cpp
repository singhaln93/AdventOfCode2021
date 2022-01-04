/**
 * @file lib.cpp
 * Copyright © 2021  Neeraj Singhal
 * All rights reserved
 */

#include "lib.hpp"

void sayHello() { std::cout << "Hello from the outside!" << std::endl; }

int randomNumberGenerator(const int &min, const int &max)
{
    std::random_device rd;                           // obtain a random number from hardware
    std::mt19937 gen(rd());                          // seed the generator
    std::uniform_int_distribution<> distr(min, max); // define the range
    return distr(gen);
}