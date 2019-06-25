#include <iostream>

/// 関数のオーバーロード
int max(int a, int b) { return (a > b) ? a : b; }
double max(double a, double b) { return (a > b) ? a : b; }

struct Class {
  /// メソッドのオーバーロード
  void method() { std::cout << "void" << std::endl; }
  void method(int i) { std::cout << i << std::endl; }

  /// 演算子のオーバーロード
  void operator()() { std::cout << "Class call" << std::endl; }
};

int main() {
  auto n = max(10, 20);
  auto d = max(3.2, 1.6);
  std::cout << n << " " << d << std::endl;

  auto c = Class();
  c.method();
  c.method(10);

  c();
}
