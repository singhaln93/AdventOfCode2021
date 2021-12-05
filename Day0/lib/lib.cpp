/**
 * @file input.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "lib.h"

void sayHello() { std::cout << "Hello from the outside!" << std::endl; }

bool getFileContent(std::string fileName, std::vector<std::string> &vecOfStrs) {
  // Open the File
  std::ifstream in(fileName.c_str());
  // Check if object is valid
  if (!in) {
    std::cerr << "Cannot open the File : " << fileName << std::endl;
    return false;
  }
  std::string str;
  // Read the next line from File untill it reaches the end.
  while (std::getline(in, str)) {
    // Line contains string of length > 0 then save it in vector
    if (str.size() > 0)
      vecOfStrs.push_back(str);
  }
  // Close The File
  in.close();
  return true;
}