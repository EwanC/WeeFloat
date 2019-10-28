#include <gtest/gtest.h>
#include <bfloat16.h>

TEST(BFloat16, FloatConstructor) {
  BFloat16(1.0f);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
