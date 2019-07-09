#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{5, 4, 3, 2, 1};
  std::sort(v.begin(), v.end(), [](auto, auto) { return true; });
}

