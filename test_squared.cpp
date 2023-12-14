#include <gtest/gtest.h>
#include "./squared.hpp"

///////////////////////////////////////////////////////////////////
// Testing squared function
///////////////////////////////////////////////////////////////////


TEST(test_squared, squared_1_0_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, i * i));
  }
  function_data = squared(data, 1, 0, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_2_0_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, 2*i*i));
  }
  function_data = squared(data, 2, 0, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_neg1_0_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, (-1)*i*i));
  }
  function_data = squared(data, -1, 0, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_1_1_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, i*i + i));
  }
  function_data = squared(data, 1, 1, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_1_1_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, i*i + i + 1));
  }
  function_data = squared(data, 1, 1, 1); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_neg1_1_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, (-1)*i*i + i + 1));
  }
  function_data = squared(data, -1, 1, 1); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_1000_1000_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, 1000*i*i + 1000*i));
  }
  function_data = squared(data, 1000, 1000, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_1000_1000_1000) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, 1000*i*i + 1000*i + 1000));
  }
  function_data = squared(data, 1000, 1000, 1000); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_0_0_1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, 1));
  }
  function_data = squared(data, 0, 0, 1); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_0_neg1_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, (-1) * i));
  }
  function_data = squared(data, 0, -1, 0); 
  EXPECT_EQ(data_expected, function_data);
}

TEST(test_squared, squared_0_0_neg1) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> data_expected; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
    data_expected.push_back(std::make_tuple(i, -1));
  }
  function_data = squared(data, 0, 0, -1); 
  EXPECT_EQ(data_expected, function_data);
}
