#include <iostream>

template <class T>
T func(T x, T y) {
  return std::max(x, y);
}

int main() {
  auto a = func(4, 5);
  auto b = func(1.6, 3.2);
  auto c = func('a', 'c');
  auto d = func("bbb", "aaa");
  std::cout << a << " " << b << " " << c << " " << d << std::endl;
}
