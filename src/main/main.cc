#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::string input = "TEST";
  std::cout << solution.ExchangeLetter(input, 0, 1)<< std::endl;

  std::string reverse = "EE599";
  solution.Reverses(reverse);

  std::string low = "EE599";
  std::cout << solution.LowerCase(low) << std::endl;
  return 0;

  
}