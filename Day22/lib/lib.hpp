/**
 * @file input.hpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#pragma once
#include <chrono>
#include <cstring>
#include <fstream>
// #include <istream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

[[nodiscard]] bool printFileContents(const std::string &fileName = "")
{
    std::ifstream inFile;
    std::string line;
    inFile.open(fileName);
    if (!inFile)
    {
        std::cout << "Cannot open the File : " << fileName << std::endl;
        return false;
    }

    while (inFile >> line)
    {
        std::stringstream ss(line);
        std::string cmdOnOff;
        getline(ss, cmdOnOff, ' ');
        ss >> std::ws;
        //ss.get.ignore('\n');

        std::cout << "'<" << cmdOnOff << ">'" << std::endl;
    }
    // Close The File
    inFile.close();
    return true;
}

/**
 * @brief Get the file contents in <type> vector
 * @param[in] vector input <type>vector
 * @param[in] fileName filename (default parameter)
 * @return true, if successful otherwise false
 */
template <typename T>
[[nodiscard]] bool getFileContentsInVector(std::vector<T> &vector, const std::string &fileName = "")
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
void printVector(const std::vector<T> &vector)
{
    std::cout << "\nInput Heightmap:" << std::endl;
    for (auto &i : vector)
        std::cout << i << "\n";
    std::cout << std::endl;
}

/**
 * @brief random number generator function
 * @param[in] min minimum value
 * @param[in] max maximum value
 * @return int random generated number
 */
int randomNumberGenerator(const int &, const int &);
