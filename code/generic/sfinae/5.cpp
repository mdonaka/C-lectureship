#include <iostream>

int func() { std::cout << "hello" << std::endl; }

int main() {
  int a = 2;
  auto f = [&]() { a = 5; };
  f();
  std::cout << a << std::endl;
}
