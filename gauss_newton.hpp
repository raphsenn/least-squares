#ifndef GAUSS_NEWTON_HPP
#define GAUSS_NEWTON_HPP

#include <Eigen/Dense>

using FunctionType = std::function<std::vector<std::tuple<float, float>>(std::vector<std::tuple<float, float>>, const std::vector<float>&)>;
using GradientFunctionType = std::function<std::vector<std::tuple<float, float>>(std::vector<std::tuple<float, float>>, const std::vector<float>&)>;

std::vector<float> gaussNewton(FunctionType func, GradientFunctionType gradient, std::vector<std::tuple<float, float>> x, const std::vector<float>& initialCoefficients, int max_iterations = 100, float tolerance = 1e-6);

#endif // GAUSS_NEWTON_HPP
