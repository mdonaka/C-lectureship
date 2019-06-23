#include <iostream>

int main() {
  // constは外れる
  const int num1 = 10;
  auto num2 = num1;
  num2 = 5;
  std::cout << num2 << std::endl;

  // 参照は外れる
  int num3 = 10;
  int& num4 = num3;
  auto num5 = num4;
  num5 = 5;
  std::cout << num4 << std::endl;
}
