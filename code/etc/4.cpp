#include <iostream>
#include <vector>

int main() {
  int x = 5;
  int&& p = std::move(x);
  std::cout << x << std::endl;
}
