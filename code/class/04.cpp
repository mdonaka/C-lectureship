struct Class {
	void swap(Class& newClass) {
		/* �����o��swap */
	}

	// copy
	Class(const Class&) {};
	Class& operator=(const Class& newClass) {
		// ���ȑ����h���Ȃ���l��copy
		Class(newClass).swap(*this);
		return *this;
	};
};
