#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ExchangeLetterTest, HandlesExchangeLetter) {
  Solution solution;
  std::string input = "TEST";
  EXPECT_EQ(solution.ExchangeLetter(input, 0, 1), "ETST");
}

TEST(ReversesTest, HandReverses) {
  Solution solution;
  std::string reverse = "EE599";
  solution.Reverses(reverse);
  std::string actual = reverse;
  EXPECT_EQ(actual, "995EE");
}


TEST(LowerCaseTest, HandlesLowerCase) {
  Solution solution;
  std::string low = "EE599";
  EXPECT_EQ(solution.LowerCase(low), "ee599");
}
