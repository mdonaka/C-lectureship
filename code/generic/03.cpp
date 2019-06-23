#include <iostream>
#include <type_traits>

int main() {
  auto lmd1 = []() {};
  auto lmd2 = []() {};
  std::is_same<decltype(lmd1), decltype(lmd2)>::value;  // -> 0
}
