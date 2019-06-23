#include <iostream>

void func(int& t) {
  // 参照が外れる(int)
  auto vl = t;
  // 参照はそのまま(int&)
  decltype(t) rf = t;
}

int main() {
  int num = 10;
  func(num);
}
