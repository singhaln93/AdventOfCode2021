/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "../lib/lib.hpp"

int main() {
  sayHello();
  std::vector<int> vector;
  std::string fileName{"../input.txt"};
  // Get the contents of file in a vector
  bool result = getFileContentsInVector<int>(vector, fileName);
  printVector<int>(vector);
  return 0;
}
