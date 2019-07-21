struct Class1 {
	int m_num;
	Class1(int num) :m_num(num) {}

	void method1() {
		m_num = 10;
	}

	void method2() const {
		m_num = 10; // ERROR
	}
};
