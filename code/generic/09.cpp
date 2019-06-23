#include <iostream>
#include <type_traits>

int main() {
  int num = 10;
  using TYPE_REFE = int&;
  using TYPE_CST = const int;

  // 参照を外したため変更が元変数に影響しない
  std::remove_const_t<TYPE_CST> b = num;
  b = 5;
  std::cout << num << std::endl;

  // constを外したため値を変更できる
  std::remove_reference_t<TYPE_REFE> c = num;
  c = 5;
  std::cout << num << std::endl;
}
