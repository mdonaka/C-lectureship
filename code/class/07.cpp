struct Class {
	// ctor
	Class();
	// copy
	Class(const Class&);
	Class& operator=(const Class&);
	// move
	Class(Class&&) noexcept;
	Class& operator=(Class&&) noexcept;
	// dtor
	~Class();
};
