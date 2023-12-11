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
