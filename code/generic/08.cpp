#include <iostream>

int main() {
  // constはそのまま
  const int num1 = 10;
  decltype(num1) num2 = num1;
  // num2 = 5; ERROR

  // 参照はそのまま
  int num3 = 10;
  int& num4 = num3;
  decltype(num4) num5 = num4;
  num5 = 5;
  std::cout << num4 << std::endl;
}
