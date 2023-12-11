#ifndef LINEAR_HPP
#define LINEAR_HPP
#include <vector>
#include <tuple>

// linear function f(x) = m * x + b
// input: std::vector<tuple<float, float>> (std::vector with tuple<float, float> as elements, float value m and float value b
// output: returns std::vector<tuple<float, float>> with new tuple y value: y = f(x) = m * x + b for all tuple x values
std::vector<std::tuple<float, float>> linear(std::vector<std::tuple<float, float>> x, float m, float b);
std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> linear_gradient(std::vector<std::tuple<float, float>> x, float m, float b);

#endif // LINEAR_HPP
