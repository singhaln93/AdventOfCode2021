/**
 * @file main.cpp
 * Copyright © 2021  Neeraj Singhal
 * All rights reserved
 */

#include "../lib/lib.hpp"

int main() {
  sayHello();
  std::vector<int> vector{1, 2, 3, 4};
  std::string fileName{"../inputs/input.txt"};
  // // Get the contents of file in a vector
  // bool result = getFileContentsInVector(vector, fileName);
  // std::cout << "Result" << result;
  // printVector<int>(vector);

  int randomNumber = randomNumberGenerator(1, 10);
  std::cout << randomNumber << std::endl;
  return 0;
}