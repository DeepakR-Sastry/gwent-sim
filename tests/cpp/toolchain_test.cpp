#include <gtest/gtest.h>


TEST(Toolchain, CompilesAsCpp20) {
  EXPECT_GE(__cplusplus, 202002L);
}
