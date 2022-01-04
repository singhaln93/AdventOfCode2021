/**
 * @file lib.h
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#pragma once
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void sayHello() { cout << "Hello from the outside!" << endl; }

template <typename T>
void getFileContentsInVector(std::vector<T> &v, const std::string &filename,
                             const std::string &delimit = ',') {
  std::string line;
  ifstream inFile;

  inFile.open(filename);
  if (!inFile) {
    cout << "Unable to open file";
    exit(1);  // terminate with error
  }

  while (inFile >> line) {
    std::stringstream ss(line);
    for (int i; ss >> i;) {
      v.emplace_back(i);
      if (ss.peek() == delimit) ss.ignore();
    }
  }
  inFile.close();
}

template <typename T>
void printVector(std::vector<T> &v) {
  for (auto &i : v) cout << i << " ";
  cout << endl;
}
