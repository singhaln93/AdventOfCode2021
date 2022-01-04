/**
 * @file lib.hpp
 * Copyright © 2021  Neeraj Singhal
 * All rights reserved
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
 * @param[in] fileName filename
 * @return true, if successful otherwise false
 */
template <typename T>
[[nodiscard("Don't ignore the return value")]] bool getFileContentsInVector(std::vector<T> &vector,
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
            vector.push_back(i);
            if (ss.peek() == ',')
                ss.ignore();
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
void printVector(const std::vector<T> &v)
{
    for (auto &i : v)
        std::cout << i << " ";
    std::cout << std::endl;
}

/**
 * @brief generate random number
 * @param[in] min minimum value
 * @param[in] max maximum value
 * @return int generated random number
 */
int randomNumberGenerator(const int &, const int &);