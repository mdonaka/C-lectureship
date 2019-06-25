#include <iostream>

void f(const int&) { std::cout << "1"; }

template <class T>
void f(T t) {
  std::cout << "3";
}

template <>
void f<int>(int t) {
  std::cout << "2";
}

void f(double d) { std::cout << "4"; }

void f(...) { std::cout << "5"; }

int main() { f(10); }
