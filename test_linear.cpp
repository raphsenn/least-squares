#include <gtest/gtest.h>
#include "./linear.hpp"


TEST(test_linear, linear) {
  std::vector<std::tuple<float, float>> data; 
  std::vector<std::tuple<float, float>> function_data; 
  for (int i = 0; i < 100; i++) {
    data.push_back(std::make_tuple(i, i));
  }
  function_data = linear(data, 1, 0); 
  EXPECT_EQ(data, function_data);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, &argv);
  return RUN_ALL_TESTS();

}
