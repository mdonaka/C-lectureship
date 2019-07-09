#include <iostream>
#include <utility>

int main() {
  int i = 2;
  int&& p = std::move(i);
  std::cout << i << std::endl;
}
