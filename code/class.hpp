#include <iostream>

struct Class {
  // ctor
  Class() noexcept { std::cout << "default constructor" << std::endl; };
  // copy
  Class(const Class&) { std::cout << "copy constructor" << std::endl; };
  Class& operator=(const Class&) {
    std::cout << "copy substitution" << std::endl;
    return *this;
  };
  // move
  Class(Class&&) noexcept { std::cout << "move constructor" << std::endl; };
  Class& operator=(Class&&) noexcept {
    std::cout << "move substitution" << std::endl;
    return *this;
  };
  // dtor
  ~Class() noexcept { std::cout << "destructor" << std::endl; };
};
