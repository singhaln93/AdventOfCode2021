/**
 * @file input.hpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#pragma once
#include <cstring>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

/**
 * @brief sayHello function
 */
void sayHello();

/**
 * @brief Get the file contents in <type> vector
 * @param[in] vector input <type>vector
 * @param[in] fileName filename (default parameter)
 * @return true, if successful otherwise false
 */
template <typename T>
[[nodiscard]] bool getFileContentsInVector(std::vector<T> &vector,
                                           const std::string &fileName = "") {
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
    }
  }
  // Close The File
  inFile.close();
  return true;
}

/**
 * @brief displays contents of <type> vector
 * @param[in] vector input <type>vector
 */
template <typename T>
void printVector(const std::vector<T> &vector) {
  for (auto &i : vector) std::cout << i << " ";
  std::cout << std::endl;
}

/**
 * @brief
 * @param min
 * @param max
 * @return int
 */
int randomNumberGenerator(const int &, const int &);