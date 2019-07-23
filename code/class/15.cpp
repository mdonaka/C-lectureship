#include <vector>
struct Class1 {
	Class1();
	Class1(Class1&&) {}
};
struct Class2 {
	Class2();
	Class2(Class2&&) noexcept {}
};

int main() {
	std::vector<Class1> v1;
	v1.emplace_back(Class1()); //copy

	std::vector<Class2> v2;
	v2.emplace_back(Class2()); //move
}
