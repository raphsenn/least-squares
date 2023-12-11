#include "./linear.hpp"

std::vector<std::tuple<float, float>> linear(std::vector<std::tuple<float, float>> x, float m, float b) {
  std::vector<std::tuple<float, float>> y;
  for (int i = 0; i < x.size(); i++) {
    float old_x = std::get<0>(x[i]);
    float old_y = std::get<1>(x[i]);
    float new_y = m * std::get<0>(x[i]) + b;
    y.push_back(std::make_tuple(old_x, new_y));
  }
  return y;
}

std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> linear_gradient(std::vector<std::tuple<float, float>> x, float m, float b) {
  std::vector<std::tuple<float, float>> grad_m;
  std::vector<std::tuple<float, float>> grad_b;
  for (int i = 0; i < x.size(); i++) {
    float old_x = std::get<0>(x[i]);
    float old_y = std::get<1>(x[i]);
    float grad_m_value = std::get<0>(x[i]); // d / dm = x
    float grad_b_value = 1; // d / db = 1
    grad_m.push_back(std::make_tuple(old_x, grad_m_value)); 
    grad_b.push_back(std::make_tuple(old_x, grad_b_value)); 
  }
  return std::make_tuple(grad_m, grad_b);
}

