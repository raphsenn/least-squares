#ifndef SQUARED_HPP
#define SQUARED_HPP
#include <vector>
#include <tuple>

// Computes the squared function y = a * x^2 + b * x + c for each tuple x value.
// Input:
//   - x: std::vector<std::tuple<float, float>> containing tuples with x values
//   - a, b, c: Coefficients of the squared function
// Output:
//   - Returns a std::vector<std::tuple<float, float>> with new tuples (x, y) values,
//     where y = a * x^2 + b * x + c for each tuple x value
std::vector<std::tuple<float, float>> squared(std::vector<std::tuple<float, float>> x, float a, float b, float c);

#endif // SQUARED_HPP
