#include "./squared.hpp"

// Implements the squared function y = a * x^2 + b * x + c
std::vector<std::tuple<float, float>> squared(std::vector<std::tuple<float, float>> x, float a, float b, float c) {
  std::vector<std::tuple<float, float>> y; 
  
  for (int i = 0; i < x.size(); i++) {
    float x_value = std::get<0>(x[i]);
    float new_y_value = a * x_value * x_value + b * x_value + c;
    y.push_back(std::make_tuple(x_value, new_y_value)); 
  }

  return y;
}
