#include <gtest/gtest.h>
#include "./exp.hpp"

TEST(test_exp, exp_1_0_0) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, exp(0)));
  }
  function_data = exponential(data, 1, 0, 0); 
  EXPECT_EQ(data, function_data);
}






