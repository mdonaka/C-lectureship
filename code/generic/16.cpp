#include <iostream>
#include <vector>

template <class T>
class MuroranProgrammingClub {};

/// 特殊化
template <>
class MuroranProgrammingClub<int> {};

template <class T>
using MPC = MuroranProgrammingClub<T>;

/// 特殊化できない
// template <class T>
// class MPC<T> {};

int main() {}
