struct Class {
	// copy
	Class(const Class&) {};
	Class& operator=(const Class& newClass) {
		// Ž©ŒÈ‘ã“ü‚ð–h‚¬‚È‚ª‚ç’l‚ðcopy
		return *this = std::move(Class(newClass));
	};
	// move
	Class(Class&&) {}
	Class& operator=(Class&& newClass) { return *this; }
};
