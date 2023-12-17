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

// Calculates the gradient of the function y = a_0 * exp(a_1 * x) + a_2,
// with respect to a_0, a_1 and a_3
//
// Parameters:
//   x: Vector of tuples containing x values.
//   a0, a1, a2: Coefficients of the exponential function.
//
// Returns:
//   A tuple containing three vectors:
//   1. Original x values.
//   2. Corresponding y values for the exponential function.
//   3. Gradient values for each tuple x value with respect to a0, a1, and a2.
std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> exponetial_gradient(std::vector<std::tuple<float, float>> x, float a0, float a1, float a2);

#endif // EXP_HPP
