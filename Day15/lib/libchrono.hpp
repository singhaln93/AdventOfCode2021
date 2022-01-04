/**
 * @file input.hpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#pragma once
#include <chrono>

namespace libchrono {
/**
 * @brief print duration in nanoseconds
 * @param[in] durationInNanoseconds duration in nanoseconds (#3ns)
 */
void printTimeDuration(std::chrono::nanoseconds durationInNanoseconds);

/**
 * @brief print duration in microseconds
 * @param[in] durationInMicroseconds duration in microseconds
 */
void printTimeDuration(std::chrono::microseconds durationInMicroseconds);

/**
 * @brief print duration in milliseconds
 * @param[in] durationInMilliseconds duration in milliseconds (#3ms)
 */
void printTimeDuration(std::chrono::milliseconds durationInMilliseconds);

/**
 * @brief print duration in seconds
 * @param[in] durationInSeconds duration in seconds (#3s)
 */
void printTimeDuration(std::chrono::seconds durationInSeconds);

/**
 * @brief print duration in seconds
 * @param[in] durationInMinutes duration in seconds (#3min)
 */
void printTimeDuration(std::chrono::minutes durationInMinutes);

/**
 * @brief print duration in hours
 * @param[in] durationInHours duration in hours (#3h)
 */
void printTimeDuration(std::chrono::hours durationInHours);

#if __cplusplus > 201703L
/**
 * @brief print duration in days
 * @param[in] durationInDays duration in days (#3d)
 */
void printTimeDuration(std::chrono::day durationInDays);

/**
 * @brief print duration in weeks
 * @param[in] durationInWeeks duration in weeks
 */
void printTimeDuration(std::chrono::weeks durationInWeeks);

/**
 * @brief print duration in months
 * @param[in] durationInMonths duration in months
 */
void printTimeDuration(std::chrono::months durationInMonths);

/**
 * @brief print duration in years
 * @param[in] durationInYears duration in years (#3y)
 */
void printTimeDuration(std::chrono::years durationInYears);
#endif  // C++20
}  // namespace libchrono