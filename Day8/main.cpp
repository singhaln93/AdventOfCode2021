/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include <algorithm>
#include <cstring>
#include <iostream>
#include <sstream>

#include "lib.hpp"

#define TEST 1
#define Case 1

int main() {
  sayHello();
  std::vector<int> inputVector;

#if TEST == 0
  std::string filename{""};
#elif TEST == 1
  std::string filename{"../inputs/testData.txt"};
#else
  std::string filename{"../inputs/sonarData.txt"};
#endif
  const std::string delimiter{'|'};
  getFileContentsInVector<int>(inputVector, filename, delimiter);
  cout << "\nInput Vector: ";
  printVector(inputVector);
#if Case == 1

#elif Case == 2

#endif
  return 0;
}
