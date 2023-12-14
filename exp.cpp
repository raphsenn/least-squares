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


std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> exponetial_gradient(std::vector<std::tuple<float, float>> x, float a0, float a1, float a2) {

  std::vector<std::tuple<float, float>> grad_a0;
  std::vector<std::tuple<float, float>> grad_a1;
  std::vector<std::tuple<float, float>> grad_a2;

  for (int i = 0; i < x.size(); i++) {
    float x_value = std::get<0>(x[i]);
   
    float grad_a0_value = exp(a1 * x_value); // d/da0 = exp(a1 * x) 
    float grad_a1_value = a0 * x_value * exp(a1 * x_value); // d/da1 = a0 * x * exp(a1 * x)
    float grad_a2_value = 1; // d/da2 = 1 
  
    grad_a0.push_back(std::make_tuple(x_value, grad_a0_value));
    grad_a1.push_back(std::make_tuple(x_value, grad_a1_value));
    grad_a2.push_back(std::make_tuple(x_value, grad_a2_value));
  }

  return std::make_tuple(grad_a0, grad_a1, grad_a2);
}
