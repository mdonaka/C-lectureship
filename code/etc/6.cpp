#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{5, 4, 3, 2, 1};
  for (const auto& x : v) {
    if (x & 1) {
      v.emplace_back(10);
    }
  }
}

