/**
 * @file input.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "lib.hpp"

int randomNumberGenerator(const int &min, const int &max) {
  std::random_device rd;   // obtain a random number from hardware
  std::mt19937 gen(rd());  // seed the generator
  std::uniform_int_distribution<> distr(min, max);  // define the range
  return distr(gen);
}