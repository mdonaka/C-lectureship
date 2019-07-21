
constexpr int func(int n) { return n * n; }

int main() {
  constexpr auto p = func(5);
  return 0;
}
