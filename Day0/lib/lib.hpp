/**
 * @file input.hpp
 * @author Neeraj Singhal
 * @date 2021-12-04
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
[[nodiscard]] bool getFileContentsInVector(std::vector<T> &vector,
                                           const std::string &fileName = "");

/**
 * @brief displays contents of <type> vector
 * @param[in] vector input <type>vector
 */
template <typename T>
void printVector(const std::vector<T> &vector);

/**
 * @brief
 * @param min
 * @param max
 * @return int
 */
int randomNumberGenerator(const int &, const int &);