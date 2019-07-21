struct Class {
	// copy
	Class(const Class&) {};
	Class& operator=(const Class& newClass) {
		// ���ȑ����h���Ȃ���l��copy
		return *this = std::move(Class(newClass));
	};
	// move
	Class(Class&&) {}
	Class& operator=(Class&& newClass) { return *this; }
};
