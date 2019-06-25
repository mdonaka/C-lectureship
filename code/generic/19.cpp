#include <iostream>

template <class T, class S>
struct Class {
  Class() { std::cout << "normal" << std::endl; }
};

template <class T>
struct Class<T, int> {
  Class() { std::cout << "special" << std::endl; }
};

int main() {
  auto c1 = Class<double, double>();
  auto c2 = Class<double, int>();
}
