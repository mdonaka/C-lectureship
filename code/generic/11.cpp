#include <iostream>

decltype(auto) func(int& p) { return p; }

int main() {
  const int num = 10;
  decltype(auto) a = num;
  // a = 5; ERROR

  int num2 = 10;
  decltype(auto) b = func(num2);
  b = 5;
  std::cout << num2 << std::endl;
}

