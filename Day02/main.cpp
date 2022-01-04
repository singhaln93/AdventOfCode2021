/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "lib.h"
#include <iostream>
#include <vector>
#define TEST 1
#define Case 2

int main() {
  sayHello();
  std::vector<std::string> command;
  std::vector<int> value;
  std::string cmd;
  int val{0};

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

  while (inFile >> cmd >> val) {
    command.push_back(cmd);
    value.push_back(val);
  }
  inFile.close();

  auto posHorizontal{0};
  auto posDepth{0};
  auto posAim{0};
  auto Result{0};
#if Case == 1
  cout << "\nInput Command:";
  for (int i = 0; i < command.size(); i++) {
    cout << "(" << command[i] << "," << value[i] << ") ";
    if (command[i] == "forward") {
      posHorizontal += value[i];
    } else if (command[i] == "up") {
      posDepth -= value[i];
    } else if (command[i] == "down") {
      posDepth += value[i];
    } else {
      cout << "Wrong Case!!";
      exit(1);
      break;
    }
  }

  Result = posHorizontal * posDepth;
  cout << "\nResult:" << Result << endl;
#endif

#if Case == 2
  cout << "\nInput Command:";
  for (int i = 0; i < command.size(); i++) {
    cout << "(" << command[i] << "," << value[i] << ") ";
    if (command[i] == "forward") {
      posHorizontal += value[i];
      posDepth += posAim * value[i];
    } else if (command[i] == "up") {
      posAim -= value[i];
    } else if (command[i] == "down") {
      posAim += value[i];
    } else {
      cout << "Wrong Case!!";
      exit(1);
      break;
    }
  }
  cout << "\n(" << posHorizontal << "," << posDepth << ") " << posAim;
  Result = posHorizontal * posDepth;
  cout << "\nResult:" << Result << endl;
#endif
  return 0;
}
