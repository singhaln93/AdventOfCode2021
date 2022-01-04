/**
 * @file lib.cpp
 * Copyright © 2021  Neeraj Singhal
 * All rights reserved
 */

#include "lib.hpp"

void sayHello() { std::cout << "Hello from the outside!" << std::endl; }

template <typename T>
bool getFileContentsInVector(std::vector<T> &vector,
                             const std::string &fileName)
{
    std::string line;
    std::ifstream inFile;
    inFile.open(fileName);
    if (!inFile)
    {
        std::cout << "Cannot open the File : " << fileName << std::endl;
        return false;
    }
    while (inFile >> line)
    {
        std::stringstream ss(line);
        for (int i; ss >> i;)
        {
            vector.emplace_back(i);
            if (ss.peek() == ',')
                ss.ignore();
        }
    }
    // Close The File
    inFile.close();
    return true;
}

template <typename T>
void printVector(const std::vector<T> &v)
{
    for (auto &i : v)
        std::cout << i << " ";
    std::cout << std::endl;
}

int randomNumberGenerator(const int &min, const int &max)
{
    std::random_device rd;                           // obtain a random number from hardware
    std::mt19937 gen(rd());                          // seed the generator
    std::uniform_int_distribution<> distr(min, max); // define the range
    return distr(gen);
}