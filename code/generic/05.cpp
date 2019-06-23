#include <iostream>

int main() {
  int num1 = 10;
  /// constを付与
  const auto num2 = num1;
  // num2 = 5; ERROR

  /// 参照を付与
  auto& num3 = num1;
  num3 = 5;
  std::cout << num1 << std::endl;

  /// const参照を付与
  const auto& num4 = num1;
  // num4 = 5; ERROR
}
