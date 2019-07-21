struct Class {
	void swap(Class& newClass) {
		/* ƒƒ“ƒo‚Ìswap */
	}

	// copy
	Class(const Class&) {};
	Class& operator=(const Class& newClass) {
		// ©ŒÈ‘ã“ü‚ğ–h‚¬‚È‚ª‚ç’l‚ğcopy
		Class(newClass).swap(*this);
		return *this;
	};
};
