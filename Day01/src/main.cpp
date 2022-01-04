/**
 * @file main.cpp
 * Copyright © 2021  Neeraj Singhal
 * All rights reserved
 */

#include "../lib/lib.hpp"
#define TEST 1
#define PART 2

int main()
{
// Selecting the test data or actual data using TEST macro
#if TEST == 1
  std::string fileName{"../inputs/testData.txt"};
#else
  std::string fileName{"../inputs/actualData.txt"};
#endif

  std::vector<int> vector;
  [[maybe_unused]] auto res = getFileContentsInVector<int>(vector, fileName);
  std::cout << "Input SonarData: ";
  printVector<int>(vector);
#if PART == 1
  auto count = 0;
  auto size = static_cast<int>(vector.size());
  for (auto i = 0; i < size; i++)
  {
    if (vector[i] < vector[i + 1])
      count++;
  }
  std::cout << "count:" << count << std::endl;
#endif

#if PART == 2
  auto countWindow = 0;
  std::vector<int> sumWindow;

  auto size = static_cast<int>(vector.size());
  for (auto i = 0; i < size; i++)
  {
    sumWindow.push_back(vector[i] + vector[i + 1] + vector[i + 2]);
  }

  std::cout << "SonarData Window: ";
  printVector<int>(sumWindow);
  auto sizeWindow = static_cast<int>(sumWindow.size());
  for (auto i = 0; i < sizeWindow - 1; i++)
  {
    if (sumWindow[i] < sumWindow[i + 1])
      countWindow++;
  }

  std::cout << "countWin:" << countWindow << std::endl;
#endif
  return 0;
}
