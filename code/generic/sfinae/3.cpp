#include <iostream>
#include <type_traits>

template <class T>
void func(T t) {
  std::cout << t << std::endl;
}

template <class T>
auto func(T t) -> std::enable_if_t<false> {}

int main() { func(10); }
