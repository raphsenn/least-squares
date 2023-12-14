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

std::tuple< std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> squared_gradient(std::vector<std::tuple<float, float> > x, float a, float b, float c) {
  std::vector<std::tuple<float, float>> grad_a;
  std::vector<std::tuple<float, float>> grad_b;
  std::vector<std::tuple<float, float>> grad_c;
  
  for (int i = 0; i < x.size(); i++) {
    float x_value = std::get<0>(x[i]);
    
    float grad_a_value = x_value * x_value; // d/da = x²
    float grad_b_value = x_value; // d/db = x
    float grad_c_value = 1; // d/dc = 1

    grad_a.push_back(std::make_tuple(x_value, grad_a_value));
    grad_b.push_back(std::make_tuple(x_value, grad_b_value));
    grad_c.push_back(std::make_tuple(x_value, grad_c_value));
  }

  return std::make_tuple(grad_a, grad_b, grad_c);
}
