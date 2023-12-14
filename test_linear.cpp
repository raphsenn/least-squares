#include <gtest/gtest.h>
#include "./linear.hpp"

///////////////////////////////////////////////////////////////////
// Testing linear function
// Calculates the linear function f(x) = m * x + b (with respect to m and b)
///////////////////////////////////////////////////////////////////

TEST(test_linear, linear_1_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, i));
  }
  function_data = linear(data, 1, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_linear, linear_neg1_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, (-1)*i));
  }
  function_data = linear(data, -1, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_linear, linear_2_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, 2*i));
  }
  function_data = linear(data, 2, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_linear, linear_100_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, 100 * i));
  }
  function_data = linear(data, 100, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_linear, linear_0_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, 1));
  }
  function_data = linear(data, 0, 1); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_linear, linear_1_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, i + 1));
  }
  function_data = linear(data, 1, 1); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_linear, linear_1_100) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, i + 100));
  }
  function_data = linear(data, 1, 100); 
  EXPECT_EQ(data_expected, function_data);
}

///////////////////////////////////////////////////////////////////
// Testing linear_gradient function
// Calculates the gradient of the linear function f(x) = m * x + b (with respect to m and b)
///////////////////////////////////////////////////////////////////

TEST(test_linear, linear_gradient_1_1) {
  std::vector<std::tuple<float, float>> data;
  
  std::vector<std::tuple<float, float>> expected_grad_m; 
  std::vector<std::tuple<float, float>> expected_grad_b; 
  std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> expected_gradient;
  
  for (int i = 0; i < 100; i++) {
    float grad_m_value_expected = i;
    float grad_b_value_expected = 1;
    expected_grad_m.push_back(std::make_tuple(i, grad_m_value_expected)); 
    expected_grad_b.push_back(std::make_tuple(i, grad_b_value_expected)); 
    data.push_back(std::make_tuple(i, i)); 
  }
  expected_gradient = std::make_tuple(expected_grad_m, expected_grad_b);
  EXPECT_EQ(expected_gradient, linear_gradient(data, 1, 1));
}

TEST(test_linear, linear_gradient_0_1) {
  std::vector<std::tuple<float, float>> data;
  
  std::vector<std::tuple<float, float>> expected_grad_m; 
  std::vector<std::tuple<float, float>> expected_grad_b; 
  std::tuple<std::vector<std::tuple<float, float>>, std::vector<std::tuple<float, float>>> expected_gradient;
  
  for (int i = 0; i < 100; i++) {
    float grad_m_value_expected = i;
    float grad_b_value_expected = 1;
    expected_grad_m.push_back(std::make_tuple(i, grad_m_value_expected)); 
    expected_grad_b.push_back(std::make_tuple(i, grad_b_value_expected)); 
    data.push_back(std::make_tuple(i, i)); 
  }
  expected_gradient = std::make_tuple(expected_grad_m, expected_grad_b);
  EXPECT_EQ(expected_gradient, linear_gradient(data, 0, 1));
}


