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

// Computes the gradient of the squared function y = a * x^2 + b * x + c,
// with respect to a, b and c.
//
// Parameters:
//   x: Vector of tuples containing x values.
//   a, b, c: Coefficients of the squared function.
//
// Returns:
//   A tuple containing three vectors:
//   1. Original x values.
//   2. Corresponding y values for the squared function.
//   3. Gradient values for each tuple x value with respect to a, b, and c.
std::tuple< std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> squared_gradient(std::vector<std::tuple<float, float> > x, float a, float b, float c); 

#endif // SQUARED_HPP
