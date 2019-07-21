
class C1 {
	int p;
};

struct C2 {
	int p;
};

signed main() {
	auto a = C1();
	auto b = C2();

	a.p; // ERROR
	b.p;
}
