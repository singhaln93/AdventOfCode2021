/**
 * @file input.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "lib.hpp"

void sayHello() { std::cout << "Hello from the outside!" << std::endl; }

template <typename T>
bool getFileContentsInVector(std::vector<T> &vector,
                             const std::string &fileName) {
  std::string line;
  std::ifstream inFile;
  inFile.open(fileName);
  if (!inFile) {
    std::cout << "Cannot open the File : " << fileName << std::endl;
    return false;
  }
  while (inFile >> line) {
    std::stringstream ss(line);
    for (int i; ss >> i;) {
      vector.emplace_back(i);
      if (ss.peek() == ',') ss.ignore();
    }
  }
  // Close The File
  inFile.close();
  return true;
}

template <typename T>
void printVector(const std::vector<T> &v) {
  for (auto &i : v) std::cout << i << " ";
  std::cout << std::endl;
}
