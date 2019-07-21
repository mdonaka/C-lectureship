struct Class {
	const int m_num;

	Class(int n) :m_num(n){}

	static void method() {
		std::cout << "Hello World" << std::endl;
	}
};
