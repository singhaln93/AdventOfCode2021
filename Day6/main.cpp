// /**
//  * @file main.cpp
//  * @author Neeraj Singhal
//  * @date 2021-12-04
//  */

// #include "lib.h"
// #include <algorithm>
// #include <cstring>
// #include <iomanip>
// #include <iostream>
// #include <string>
// #include <vector>
// #define TEST 2
// #define Case 1

// int main() {
//   sayHello();
//   std::vector<std::string> Input;
//   std::string data;
//   std::vector<int> intVector;
//   ifstream inFile;

// #if TEST == 0
//   std::string filename{""};
// #elif TEST == 1
//   std::string filename{"../inputs/testData.txt"};
// #else
//   std::string filename{"../inputs/sonarData.txt"};
// #endif

//   inFile.open(filename);
//   if (!inFile) {
//     cout << "Unable to open file";
//     exit(1); // terminate with error
//   }

//   while (getline(inFile, data, ',')) {
//     Input.push_back(data);
//   }
//   inFile.close();
//   for (auto i : Input) {
//     int num = atoi(i.c_str());
//     intVector.push_back(num);
//   }

// #if Case == 1
//   constexpr int days{256};
//   auto count{0};
//   cout << "Initial state: ";
//   for (auto i : intVector) {
//     cout << i << " ";
//   }
//   const auto printVector = [](std::vector<int> v) {
//     for (auto num : v)
//       std::cout << num << ' ';
//   };
//   const auto decrOneFromVector = [](std::vector<int> &v) {
//     for (auto i = 0; i < v.size(); i++) {
//       if (v[i] == 0) {
//         v[i] = 6;
//         v.emplace_back(9);
//       } else
//         v[i] -= 1;
//       std::cout << v[i] << ' ';
//     }
//   };

//   for (int i = 1; i <= days; i++) {
//     cout << "\nAfter" << std::setw(3) << i << " day:  ";
//     decrOneFromVector(intVector);
//     if (i == days) {
//       count = intVector.size();
//     }
//   }
//   cout << "\n\nCount of lanternfish after " << days
//        << " days (26984457539) = " << count << endl;
// #endif

// #if Case == 2

// #endif
//   return 0;
// }

#include <fstream>
#include <iostream>
#include <vector>

uint64_t offspring(std::vector<uint64_t> &values, const short val,
                   const short days) {
  if (val >= days) {
    return 1;
  }

  uint64_t res = 0;
  const short spawnedCount = (days - val - 1) / 7 + 1;
  for (short i = 0; i < spawnedCount; ++i) {
    const short newDay = days - val - 3 - (7 * i);
    if (newDay <= 0) {
      ++res;
      continue;
    }
    auto &v = values[newDay];
    if (v == 0) {
      v = offspring(values, 6, newDay);
    }
    res += v;
  }
  return 1 + res;
}

int main() {
  std::ifstream file("../inputs/sonarData.txt");

  std::vector<uint64_t> values(256, 0);
  uint64_t offspringAfter256 = 0, offspringAfter80 = 0;
  constexpr unsigned short days = 256;
  for (unsigned short newFish; file >> newFish; file.ignore()) {
    offspringAfter256 += offspring(values, newFish, 256);
    offspringAfter80 += offspring(values, newFish, 80);
  }

  std::cout << "(Part 1) Fish after 80 days: " << offspringAfter80 << std::endl;
  std::cout << "(Part 2) Fish after 256 days: " << offspringAfter256;

  std::cin.get();
  return 0;
}