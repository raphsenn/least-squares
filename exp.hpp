#ifndef EXP_HPP
#define EXP_HPP
#include <vector>
#include <tuple>
#include <cmath>

// Input:
//  - x: std::vector<std::tuple<float, float>> containing tuples with x values
//  - a0, a1, a2: Coefficients of the exponential function
// Output:
//  - Returns a std::vector<std::tuple<float, float>> with new tuples (x, y) values,
//     where y = a0 * exp(a1 * x) + a2 for each tuple x value
std::vector<std::tuple<float, float>> exponential(std::vector<std::tuple<float, float>> x, float a0, float a1, float a2);

// Calculates the gradient of the function y = a_0 * exp(a_1 * x) + a_2,
// with respect to a_0, a_1 and a_3
//
// Input:
//  - x: std::vector<std::tuple<float, float>> containing tuples with x values
//  - a0, a1, a2: Coefficients of the exponential function.
//
// Output:
// - Returns a std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>>,
// where the first tuple contains the gradient with respect to a0,
// the second tuple contains the gradient with respect to a1,
// and the third tuple contains the gradient with respect to a2.
std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> exponetial_gradient(std::vector<std::tuple<float, float>> x, float a0, float a1, float a2);

#endif // EXP_HPP
