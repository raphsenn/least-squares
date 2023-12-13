#include <gtest/gtest.h>
#include "./linear.hpp"

TEST(test_linear, linear_1_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
  }
  function_data = linear(data, 1, 0); 
  EXPECT_EQ(data, function_data);
}

TEST(test_linear, linear_neg1_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, (-1)*i));
  }
  function_data = linear(data, -1, 0); 
  EXPECT_EQ(data, function_data);
}

TEST(test_linear, linear_2_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, 2*i));
  }
  function_data = linear(data, 2, 0); 
  EXPECT_EQ(data, function_data);
}

TEST(test_linear, linear_100_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, 100 * i));
  }
  function_data = linear(data, 100, 0); 
  EXPECT_EQ(data, function_data);
}

TEST(test_linear, linear_0_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, 1));
  }
  function_data = linear(data, 0, 1); 
  EXPECT_EQ(data, function_data);
}

TEST(test_linear, linear_1_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i + 1));
  }
  function_data = linear(data, 1, 1); 
  EXPECT_EQ(data, function_data);
}

TEST(test_linear, linear_1_100) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i + 100));
  }
  function_data = linear(data, 1, 100); 
  EXPECT_EQ(data, function_data);
}
