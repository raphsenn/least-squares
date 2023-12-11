#include "./exp.hpp"

std::vector<std::tuple<float, float>> exponential(std::vector<std::tuple<float, float>> x, float a0, float a1, float a2) {
  std::vector<std::tuple<float, float>> y; 
  for (int i = 0; i < x.size(); i++) {
    float x_value = std::get<0>(x[i]);
    float new_y_value = a0 * exp(a1) + a2;
    y.push_back(std::make_tuple(x_value, new_y_value)); 
  }
  return y;
}

