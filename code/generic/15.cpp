#include <iostream>
#include <vector>

template <class T>
class MuroranProgrammingClub {};

template <class T>
using V = std::vector<T>;

template <class T>
using MPC = MuroranProgrammingClub<T>;

int main() {
  V<int> vi;
  V<char> vc;
  MPC<int> m;
  MPC<char> p;
  MPC<double> c;
}
