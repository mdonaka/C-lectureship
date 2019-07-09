template <class T>
struct has_begin {
 private:
  template <class U>
  static auto check(U x) -> decltype(x.begin(), std::true_type{});
  static std::false_type check(...);

 public:
  static bool const value = decltype(check(std::declval<T>()))::value;
};
