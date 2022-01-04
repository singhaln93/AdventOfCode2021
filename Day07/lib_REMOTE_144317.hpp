/**
 * @file lib.h
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#pragma once
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void sayHello() { cout << "Hello from the outside!" << endl; }

template <typename T> void printVector(std::vector<T> &v) {
  for (auto &i : v)
    cout << i << " ";
  cout << endl;
}
