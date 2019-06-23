#include <list>
#include <set>
#include <vector>

int main() {
  // 前者はvectorに推論はされない
  auto vec1 = {1, 2, 3};
  auto vec2 = std::vector<int>({1, 2, 3});

  // initializer lists
  auto il = {1, 2, 3};
  // あらゆるコンテナに暗黙的変換できる
  std::vector<int> v = il;
  std::set<int> s = il;
  std::list<int> l = il;
}
