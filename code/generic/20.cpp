#include <iostream>

void g(int) {}
void g(const int&) {}

template <class T, class S>
void h(T t, S s);
template <class T>
void h(T t, int s);
template <class S>
void h(int t, S s);

template <class T>
void p(T t, int s);
template <class S>
void p(int t, S s);

void f(double d) {}
void f(float d) {}

int main() {
  // g(10); //ERROR:1
  // h<int>(10, 10);  // ERROR:2
  // p(10, 10);  // ERROR:3
  // f(10); //ERROR:4
}
