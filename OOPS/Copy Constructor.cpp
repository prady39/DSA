// Cube class is created for this purpose first.
// Cube.h
#pragma once 
namespace uiuc {
	class Cube {
	private:
		length_;

	public:
		Cube();                            // Constructor

		double getVolume();
		double getArea();
		void setLength(double length);	
	}
}

// Cube.cpp
#include "Cube.h"
#include <iostream>

namespace uiuc {
	Cube::Cube() {
		length_ = 1;
	}

	Cube::Cube(const Cube & obj){
		length_ = obj.length_;
	}
}

// Main.cpp
#include "Cube.cpp"
#include <iostream>
using namespace std;
using namespace uiuc::Cube;

void foo(Cube obj) {

}

int main() {
	Cube c;                            // Default constructor
	foo(c);                            // Copy Constructor bcoz obj is being passed

	return 0;
}

// Main.cpp
#include "Cube.cpp"
#include <iostream>
using namespace std;
using namespace uiuc::Cube;

Cube foo() {
	Cube c;                            // Default constructor called
	return c;                          // Copy constructor bcoz value is being returned
}

int main() {
	Cube c1 = foo();                   // Copy Constructor bcoz obj value is being copied from main stack to variable c1       
	                       
	return 0;
}

// Main.cpp
#include "Cube.cpp"
#include <iostream>
using namespace std;
using namespace uiuc::Cube;

int main() {
	Cube c;                            // Default constructor
	Cube c1 = c;                       // Copy Constructor bcoz obj value is being copied

	return 0;
}

// Main.cpp
#include "Cube.cpp"
#include <iostream>
using namespace std;
using namespace uiuc::Cube;

int main() {
	Cube c;                            // Default constructor
	Cube c1;                           // Default constructor
	
	c1 = c;                            // Nothing because no object is being created. It's just assignment.

	return 0;
}