/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include <ostream>
#include <string>
#include <utility>
#include <vector>

#include "../lib/lib.hpp"
#define TEST 1
#define Case 1

int main() {
#if TEST == 1
  std::string fileName{"../inputs/testData.txt"};
#else
  std::string fileName{"../inputs/actualData.txt"};
#endif

  std::vector<int> lines{};
  std::vector<int> singleStep{};

  // Get the contents of file in a vector
  [[maybe_unused]] bool result = getFileContentsInVector<int>(lines, fileName);
  printVector<int>(lines);

#if Case == 1

#endif
#if Case == 2

#endif
  return 0;
}