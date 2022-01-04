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

#if TEST == 1
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

  auto rateGamma{0};
  auto rateEpsilon{0};
  auto resultPowerConsumption{0};

  auto countOnes{0};
  auto countZeros{0};

#if Case == 1
  cout << "\nBinary Input:";
  for (auto i : binaryInput) {
    cout << "[" << i << "] ";
    std::vector<char> data;
    std::copy(i.c_str(), i.c_str() + i.length(), data);
    for (int j = 0; j < 5; j++) {
      if (data == "1")
        countOnes++;
      else
        countZeros++;
    }
  }

  std::string rG;
  std::string rY;
  if (countOnes > countZeros) {
    rG.append("1");
    rY.append("0");
  } else {
    rG.append("0");
    rY.append("1");
  }

  resultPowerConsumption = rateGamma * rateEpsilon;
  cout << "\nPower Consumption:" << resultPowerConsumption << endl;
#endif

#if Case == 2

#endif
  return 0;
}
