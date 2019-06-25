#include <iostream>

class C {
 public:
  C() {}

  template <class T>
  T method(T t) {
    return t;
  }
};

int main() {
  {
    auto ins = C();
    auto m1 = ins.method(5);
    auto m2 = ins.method('a');
    auto m3 = ins.method("str");
    std::cout << m1 << " " << m2 << " " << m3 << std::endl;
  }
}
