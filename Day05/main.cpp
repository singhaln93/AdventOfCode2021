/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "lib.h"
#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#define TEST 1
#define Case 1

int main() {
  sayHello();
  std::vector<std::string> X1, X2, Y1, Y2;
  int x1, x2, y1, y2;
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
  std::string line;
  while (getline(inFile, line)) {
    std::string coordsX1Y1 = line.substr(0, line.find("->"));
    std::string coordsX2Y2 = line.substr(line.find("> ") + 1, line.find("/0"));
    // cout << coordsX1Y1 << "\t" << coordsX2Y2 << endl;
    std::string data1 = coordsX1Y1.substr(0, coordsX1Y1.find(","));
    X1.push_back(data1);
    std::string data2 =
        coordsX1Y1.substr(coordsX1Y1.find(",") + 1, coordsX1Y1.find("/0"));
    cout << data1; //<< "\t" << data2;
    std::string data3 = coordsX2Y2.substr(0, coordsX2Y2.find(","));
    std::string data4 =
        coordsX2Y2.substr(coordsX2Y2.find(",") + 1, coordsX2Y2.find("/0"));
    // cout << data3 << "\t" << data4 << endl;
  }

  inFile.close();

#if Case == 1
  auto size = X1.size();
  cout << "\nValues:\n";
  for (int i = 0; i < size; i++) {
    cout << "(" << X1[i] << "," << Y1[i] << ")";
    cout << " -> (" << X2[i] << "," << Y2[i] << ")\n";
  }

#endif

#if Case == 2

#endif
  return 0;
}
