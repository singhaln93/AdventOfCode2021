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

  std::vector<int> lines{};
  std::vector<int> singleStep{};

  // Get the contents of file in a vector
  [[maybe_unused]] bool result = getFileContentsInVector<int>(lines, fileName);
  printVector<int>(lines);

  using namespace std::literals::chrono_literals;
  libchrono::printTimeDuration(3h);
  libchrono::printTimeDuration(3min);
  libchrono::printTimeDuration(3s);
  libchrono::printTimeDuration(3ms);
  libchrono::printTimeDuration(3ns);
  constexpr uint8_t abc{32_mV};

  const auto start = std::chrono::steady_clock::now();
  std::cout << abc + 2_mV << "mV\n";
  const auto end = std::chrono::steady_clock::now();

  std::cout << "Calculations took "
            << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start)
                   .count()
            << "ns ≈ " << (end - start) / 1us << "us ≈ ";

#if Case == 1

#endif
#if Case == 2

#endif
  return 0;
}
