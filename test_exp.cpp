#include <gtest/gtest.h>
#include "./exp.hpp"

TEST(test_exp, exp_1_0_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    float y_value = std::round(exp(0) * 10000.0) / 10000.0; 
    data.push_back(std::make_tuple(i, y_value));
  }
  function_data = exponential(data, 1, 0, 0); 
  EXPECT_EQ(data, function_data);
}

TEST(test_exp, exp_1_1_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (float i = 0.0; i < 100; i++) {
    float y_value = 1 * exp(1 * i) + 0; 
    y_value= std::round(y_value * 10000.0) / 10000.0; 
    data.push_back(std::make_tuple(i, y_value));
  }
  function_data = exponential(data, 1, 1, 0); 
  EXPECT_EQ(data, function_data);
}

TEST(test_exp, exp_1_1_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (float i = 0.0; i < 100; i++) {
    float y_value = 1 * exp(1 * i) + 1; 
    y_value= std::round(y_value * 10000.0) / 10000.0; 
    data.push_back(std::make_tuple(i, y_value));
  }
  function_data = exponential(data, 1, 1, 1); 
  EXPECT_EQ(data, function_data);
}

TEST(test_exp, exp_neg1_1_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (float i = 0.0; i < 100; i++) {
    float y_value = (-1) * exp(1 * i) + 1; 
    y_value= std::round(y_value * 10000.0) / 10000.0; 
    data.push_back(std::make_tuple(i, y_value));
  }
  function_data = exponential(data, -1, 1, 1); 
  EXPECT_EQ(data, function_data);
}

TEST(test_exp, exp_2_1_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (float i = 0.0; i < 100; i++) {
    float y_value = 2 * exp(1 * i) + 1; 
    y_value= std::round(y_value * 10000.0) / 10000.0; 
    data.push_back(std::make_tuple(i, y_value));
  }
  function_data = exponential(data, 2, 1, 1); 
  EXPECT_EQ(data, function_data);
}

TEST(test_exp, exp_1_2_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (float i = 0.0; i < 100; i++) {
    float y_value = 1 * exp(2 * i) + 1; 
    y_value= std::round(y_value * 10000.0) / 10000.0; 
    data.push_back(std::make_tuple(i, y_value));
  }
  function_data = exponential(data, 1, 2, 1); 
  EXPECT_EQ(data, function_data);
}

TEST(test_exp, exp_1_1_1000) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (float i = 0.0; i < 100; i++) {
    float y_value = 1 * exp(1 * i) + 1000; 
    y_value= std::round(y_value * 10000.0) / 10000.0; 
    data.push_back(std::make_tuple(i, y_value));
  }
  function_data = exponential(data, 1, 1, 1000); 
  EXPECT_EQ(data, function_data);
}
