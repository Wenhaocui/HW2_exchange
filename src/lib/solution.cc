#include "solution.h"
#include <iostream>

std::string Solution::ExchangeLetter(std::string &input, int i, int j){
  std::swap(input[i], input[j]);
  return input;
}

void Solution::Reverses(std::string &input){
  int len = input.length();
  int n = len-1;
  for(int i = 0;i < (len/2); i++){
    std::swap(input[i], input[n]);
    n -= 1;
  }
  std::cout << input<< std::endl;
}

std::string Solution::LowerCase(std::string &input){
  std::for_each(input.begin(), input.end(), [](char & c){
  c = ::tolower(c);
  });
  return input;
}
