struct Class {
	void swap(Class& newClass) {
		/* メンバのswap */
	}

	// copy
	Class(const Class&) {};
	Class& operator=(const Class& newClass) {
		// 自己代入を防ぎながら値をcopy
		Class(newClass).swap(*this);
		return *this;
	};
};
