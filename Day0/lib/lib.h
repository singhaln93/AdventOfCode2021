/**
 * @file input.h
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

/**
 * @brief sayHello function
 */
void sayHello();

/**
 * @brief Get the File Content object
 * @details It will iterate through all the lines in file and put them in given
 * vector
 * @param fileName
 * @param vecOfStrs
 * @return true
 */
bool getFileContent(std::string fileName, std::vector<std::string> &vecOfStrs);