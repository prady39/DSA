Copy Assignment Operator: Custom Assignment Operator that defines the usage of = sign.
Properties:
- Public member of a class 
- Has function name operator=
- Return value same as of the object of the class.(Cube & in the beginning)
- Exactly one argument which is a constant reference of the object of that class.

// Addition to the cube.cpp file
namespace uiuc {
	Cube & Cube::operator= (const Cube & obj) {
		length_ = obj.length_;
		cout << "Custom Assignment Operator called";
		return *this;                                  // this is the instance of the class. So we are returning the instance of the class.
	}
}