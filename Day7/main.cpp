/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "lib.hpp"
#include <algorithm>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
//#define TEST 1
#define Case 1

int main() {
  sayHello();
  std::vector<int> inputVector;
  std::string line;
  ifstream inFile; 

#if TEST == 0
  std::string filename{""};
#elif TEST == 1
  std::string filename{"../inputs/testData.txt"};
#else
  std::string filename{"../inputs/sonarData.txt"};
#endif

  inFile.open(filename);
  if (!inFile) {
    cout << "Unable to open file";
    exit(1); // terminate with error
  }

  while (inFile >> line) {
    std::stringstream ss(line);
    for (int i; ss >> i;) {
      inputVector.emplace_back(i);
      if (ss.peek() == ',')
        ss.ignore();
    }
  }

  cout << "\nInput Vector: ";
  printVector(inputVector);
  inFile.close();

#if Case == 1

#endif

#if Case == 2

#endif
  return 0;
}
