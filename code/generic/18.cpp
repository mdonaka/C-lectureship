#include <iostream>

template <class T>
void func(T t) {
  std::cout << t << std::endl;
}
template <>
void func<int>(int t) {
  std::cout << "wow! " << t << std::endl;
}

int main() {
  func('a');
  func(10);
  func(3.2);
}
