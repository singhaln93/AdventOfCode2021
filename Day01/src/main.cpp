/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "../lib/lib.hpp"
#include <iostream>
#include <vector>
#define TEST 0

int main()
{
  sayHello();
#if 0
  int readNumbers;
  std::vector<int> vector;
  std::vector<int> sumWindow;
  std::ifstream inFile;
#if TEST == 1
  std::string filename{"../inputs/testData.txt"};
#else
  std::string filename{"../inputs/actualData.txt"};
#endif

  inFile.open(filename);
  if (!inFile)
  {
    std::cout << "Unable to open file";
    exit(1); // terminate with error
  }

  while (inFile >> readNumbers)
  {
    vector.push_back(readNumbers);
  }
  inFile.close();

  auto count = 0;
  auto countWindow = 0;
  std::cout << "Input SonarData:";
  for (auto i = 0; i < vector.size(); i++)
  {
    std::cout << vector[i] << " ";
    if (vector[i] < vector[i + 1])
    {
      count++;
    }

    sumWindow.push_back(vector[i] + vector[i + 1] + vector[i + 2]);
  }
  std::cout << "\tcount:" << count << std::endl;
  std::cout << "SonarData Window:";
  for (auto i = 0; i < sumWindow.size() - 1; i++)
  {
    std::cout << sumWindow[i] << " ";
    if (sumWindow[i] < sumWindow[i + 1])
    {
      countWindow++;
    }
  }

  std::cout << "\tcountWin:" << countWindow << std::endl;
#endif
  return 0;
}
