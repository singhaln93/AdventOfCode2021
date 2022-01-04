/**
 * @file input.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "libchrono.hpp"

#include <iostream>

void libchrono::printTimeDuration(
    std::chrono::nanoseconds durationInNanoseconds) {
  std::cout << durationInNanoseconds.count() << " nanoseconds\n";
}

void libchrono::printTimeDuration(
    std::chrono::microseconds durationInMicroseconds) {
  std::cout << durationInMicroseconds.count() << " microseconds\n";
}

void libchrono::printTimeDuration(
    std::chrono::milliseconds durationInMilliseconds) {
  std::cout << durationInMilliseconds.count() << " milliseconds\n";
}

void libchrono::printTimeDuration(std::chrono::seconds durationInSeconds) {
  std::cout << durationInSeconds.count() << " seconds\n";
}

void libchrono::printTimeDuration(std::chrono::minutes durationInMinutes) {
  std::cout << durationInMinutes.count() << " minutes\n";
}

void libchrono::printTimeDuration(std::chrono::hours durationInHours) {
  std::cout << durationInHours.count() << " hours\n";
}

#if __cplusplus > 201703L
void libchrono::printTimeDuration(std::chrono::day durationInDays) {
  std::cout << durationInDays.count() << " days\n";
}

void libchrono::printTimeDuration(std::chrono::weeks durationInWeeks) {
  std::cout << durationInWeeks.count() << " weeks\n";
}

void libchrono::printTimeDuration(std::chrono::months durationInMonths) {
  std::cout << durationInMonths.count() << " months\n";
}

void libchrono::printTimeDuration(std::chrono::years durationInYears) {
  std::cout << durationInYears.count() << " years\n";
}
#endif  // C++20