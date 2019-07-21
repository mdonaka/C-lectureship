struct Class1 {
	void method1() {}
	void method2() const{}
};

struct Class2 {
	const Class1 c;

	void method() {
		c.method1(); // ERROR
		c.method2();
	}
};
