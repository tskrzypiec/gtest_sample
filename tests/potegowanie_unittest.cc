#include <limits.h>
#include "potegowanie.h"
#include "gtest/gtest.h"
namespace {

// Tests Pot_SzybkieTest().

// Tests some trivial cases
TEST(Pot_SzybkieTest, Trivial) {

  EXPECT_EQ(8, pot_szybkie(2, 3));
  EXPECT_EQ(81, pot_szybkie(3, 4));
  EXPECT_EQ(100000, pot_szybkie(10, 5));

}

// Tests of math axiom: Any non-zero number to the zero power equals one
TEST(FactorialTest, Zero) {
    
  EXPECT_EQ(1,  pot_szybkie(12323123, 0));
}


}  // namespace