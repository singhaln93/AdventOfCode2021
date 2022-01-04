/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "lib.h"
#include <iostream>
#include <vector>
#define TEST 0

int main() {
  sayHello();
  int readNumbers;
  std::vector<int> vector;
  std::vector<int> sumWindow;
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

  while (inFile >> readNumbers) {
    vector.push_back(readNumbers);
  }
  inFile.close();

  auto count = 0;
  auto countWindow = 0;
  cout << "Input SonarData:";
  for (int i = 0; i < vector.size(); i++) {
    cout << vector[i] << " ";
    if (vector[i] < vector[i + 1]) {
      count++;
    }

    sumWindow.push_back(vector[i] + vector[i + 1] + vector[i + 2]);
  }
  cout << "\tcount:" << count << endl;
  cout << "SonarData Window:";
  for (int i = 0; i < sumWindow.size() - 1; i++) {
    cout << sumWindow[i] << " ";
    if (sumWindow[i] < sumWindow[i + 1]) {
      countWindow++;
    }
  }

  cout << "\tcountWin:" << countWindow << endl;
  return 0;
}
