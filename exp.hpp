#ifndef EXP_HPP
#define EXP_HPP
#include <vector>
#include <tuple>
#include <cmath>

// Calculates the exponential function y = a0 * exp(a1 * x) + a2 for each tuple x value.
// Input:
//   - x: std::vector<std::tuple<float, float>> containing tuples with x values
//   - a0, a1, a2: Coefficients of the exponential function
// Output:
//   - Returns a std::vector<std::tuple<float, float>> with new tuples (x, y) values,
//     where y = a0 * exp(a1 * x) + a2 for each tuple x value
std::vector<std::tuple<float, float>> exponential(std::vector<std::tuple<float, float>> x, float a0, float a1, float a2);

#endif // EXP_HPP
