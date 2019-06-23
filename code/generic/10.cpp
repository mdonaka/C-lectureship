#include <iostream>

auto func1() { return 1; }

auto func2() { return "str"; }

auto func3() {}

int main() {
  auto a = func1();
  auto b = func2();
  std::cout << a << " " << b << std::endl;
}
