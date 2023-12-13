#include "./linear.hpp"

// Implements the linear function f(x) = m * x + b
std::vector<std::tuple<float, float>> linear(std::vector<std::tuple<float, float>> x, float m, float b) {
  std::vector<std::tuple<float, float>> y;
  
  for (int i = 0; i < x.size(); i++) {
    float x_value = std::get<0>(x[i]);
    float new_y = m * x_value + b;
    y.push_back(std::make_tuple(x_value, new_y));
  }
  
  return y;
}

// Calculates the gradient of the linear function f(x) = m * x + b (with respect to m and b)
std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> linear_gradient(std::vector<std::tuple<float, float>> x, float m, float b) {
  std::vector<std::tuple<float, float>> grad_m;
  std::vector<std::tuple<float, float>> grad_b;
  
  for (int i = 0; i < x.size(); i++) {
    float x_value = std::get<0>(x[i]);
   
    // Gradient with respect to m (d/dm) 
    float grad_m_value = x_value;
    
    // Gradient with respect to b (d/db) 
    float grad_b_value = 1;

    grad_m.push_back(std::make_tuple(x_value, grad_m_value)); 
    grad_b.push_back(std::make_tuple(x_value, grad_b_value)); 
  }
  
  return std::make_tuple(grad_m, grad_b);
}
