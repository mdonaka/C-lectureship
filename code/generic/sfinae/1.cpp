#include <iostream>

template <class T>
void func(T t) {
  std::cout << t << std::endl;
}

template <class T>
auto func(T t) -> decltype(t.a) {}

int main() { func(10); }
