#include "./exp.hpp"

// Implements the exponential function y = a0 * exp(a1 * x) + a2
std::vector<std::tuple<float, float>> exponential(std::vector<std::tuple<float, float>> x, float a0, float a1, float a2) {
  std::vector<std::tuple<float, float>> y; 
  
  for (int i = 0; i < x.size(); i++) {
    float x_value = std::get<0>(x[i]);
    float new_y_value = a0 * exp(a1 * x_value) + a2;
    
    // Round the new_y_value to four decimal places
    new_y_value = std::round(new_y_value * 10000.0) / 10000.0;
    
    y.push_back(std::make_tuple(x_value, new_y_value)); 
  }
  return y;
}

