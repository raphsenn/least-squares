#include "./squared.hpp"

std::vector<std::tuple<float, float>> squared(std::vector<std::tuple<float, float>> x, float a, float b, float c) {
  std::vector<std::tuple<float, float>> y; 
  for (int i = 0; i < x.size(); i++) {
    float old_x = std::get<0>(x[i]); 
    float new_y = a * old_x * old_x + b * old_x + c;
    y.push_back(std::make_tuple(old_x, new_y)); 
  }
  return y;
}

