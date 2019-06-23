#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{1, 2, 3};

  /// vectorのイテレータの型名は？
  // std::vector<int>::iterator itr = v.begin();
  auto itr = v.begin();

  /// ラムダ式の型は？
  // ??? lmd = []() {};
  auto lmd = []() {};
}
