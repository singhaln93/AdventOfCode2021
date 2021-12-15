/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include <ostream>
#include <string>
#include <utility>

#include "../lib/lib.hpp"
#define TEST 2
#define Case 1

int main() {
#if TEST == 1
  std::string fileName{"../inputs/testData.txt"};
#else
  std::string fileName{"../inputs/actualData.txt"};
#endif

  sayHello();
  std::pair<char, char> map{};
  std::vector<char> start{};

  // Get the contents of file in a vector
  [[maybe_unused]] bool result = getFileContentsInVector(start, fileName);
  // std::cout << "Result of reading file = " << result;
  printVector(start);

#if Case == 1
  std::cout << "Template:" << std::endl;  // NNCB
  std::cout << "After step 1"
            << ":" << std::endl;  // NCNBCHB
#endif
#if Case == 2

#endif
  return 0;
}