#include <vector>

int main() {
  // 型の取得
  int num = 10;
  decltype(num) cpy = num;

  std::vector<int> v;
  decltype(v.begin()) itr = v.begin();

  // 型を保存
  using TYPE = decltype(v.rbegin());
  TYPE a, b, c, d;
}
