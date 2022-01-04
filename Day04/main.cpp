/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "lib.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define TEST 1
#define Case 1

int main() {
  sayHello();
  std::vector<std::string> binaryInput;
  string val{0};

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

  while (inFile >> val) {
    binaryInput.push_back(val);
  }
  inFile.close();

#if Case == 1

#endif

#if Case == 2

#endif
  return 0;
}
