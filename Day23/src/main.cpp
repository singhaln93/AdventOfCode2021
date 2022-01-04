/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include <sys/types.h>

#include <chrono>
#include <concepts>
#include <iostream>
#include <ostream>
#include <string>
#include <utility>
#include <vector>

#include "../lib/lib.hpp"
#include "../lib/libchrono.hpp"
#define TEST 1
#define Case 1

constexpr auto operator""_mV(unsigned long long mV) { return mV; }

int main() {
#if TEST == 1
  std::string fileName{"../inputs/testData.txt"};
#else
  std::string fileName{"../inputs/actualData.txt"};
#endif
struct coords{
  std::pair<int, int> x{};
  std::pair<int, int> y{};
  std::pair<int, int> z{};
};

  // Get the contents of file in a vector
  const auto start = std::chrono::steady_clock::now();
  [[maybe_unused]] bool result = printFileContents(fileName);
  const auto end = std::chrono::steady_clock::now();

  std::cout << "\nCalculations took "
            << std::chrono::duration_cast<std::chrono::microseconds>(end - start)
                   .count()
            << "us"<<std::endl;

#if Case == 1

#endif
#if Case == 2

#endif
  return 0;
}
