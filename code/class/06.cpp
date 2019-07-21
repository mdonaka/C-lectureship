struct Class {
	// copy
	Class(const Class&) {};
	Class& operator=(const Class& newClass) {
		// 自己代入を防ぎながら値をcopy
		return *this = std::move(Class(newClass));
	};
	// move
	Class(Class&&) {}
	Class& operator=(Class&& newClass) { return *this; }
};
