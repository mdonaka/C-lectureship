struct Class {
	const int m_num;

	Class(int n) :m_num(n){}

	void method()const {
		std::cout << "Hello World" << std::endl;
	}
};
