#ifndef LINEAR_HPP
#define LINEAR_HPP
#include <vector>
#include <tuple>

// Linear function f(x) = m * x + b
// Input:
//   - x: std::vector<std::tuple<float, float>> containing tuples with x values
//   - m: Slope of the linear function
//   - b: Y-intercept of the linear function
// Output:
//   - Returns a std::vector<std::tuple<float, float>> with new tuples (x, y) values,
//     where y = f(x) = m * x + b for each tuple x value
std::vector<std::tuple<float, float>> linear(std::vector<std::tuple<float, float>> x, float m, float b);

// Calculates the gradient of the linear function f(x) = m * x + b
// with respect to parameters m and b.
// Input:
//   - x: std::vector<std::tuple<float, float>> containing tuples with x values
//   - m: Slope of the linear function
//   - b: Y-intercept of the linear function
// Output:
//   - Returns a std::tuple containing two vectors:
//      - First vector: Gradient with respect to m (d/dm)
//      - Second vector: Gradient with respect to b (d/db)
std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> linear_gradient(std::vector<std::tuple<float, float>> x, float m, float b);

// linear_loss function for testing purpose
std::vector<std::tuple<float, float>> linear_loss(std::vector<std::tuple<float, float>> x, float m, float b);

void guass_newton_linear(std::vector<std::tuple<float, float>> x, float m_0, float b_0, float epsilon, int max_iterations);

#endif // LINEAR_HPP
