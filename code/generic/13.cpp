#include <iostream>

template <class T>
class C {
  T m_t;

 public:
  C(T t) : m_t(t) {}
  T method1() { return m_t; }
  T method2(T t) { return t; }
};

int main() {
  {
    auto ins = C<int>(10);
    auto m1 = ins.method1();
    auto m2 = ins.method2(5);
    std::cout << m1 << " " << m2 << std::endl;
  }

  {
    auto ins = C<char>('v');
    auto m1 = ins.method1();
    auto m2 = ins.method2('x');
    std::cout << m1 << " " << m2 << std::endl;
  }
}
