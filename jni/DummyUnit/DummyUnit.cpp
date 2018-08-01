//
// DummyUnit/DummyUnit.cpp
//

#include <iostream>
#include <string>
#include <vector>
#include "DummyUnit.h"

void DummyUnit::assertEquals(std::string baseline, std::string test) {
	if (baseline == test) {
		std::cout << "TEST PASSED!" << std::endl;
	} else {
		std::cout << "TEST FAILED!" << std::endl;
		std::cout << baseline + " does not equal " + test << std::endl;
	}
}

void DummyUnit::assertEquals(bool baseline, bool test) {
	if (baseline == test) {
		std::cout << "TEST PASSED!" << std::endl;
	} else {
		std::cout << "TEST FAILED!" << std::endl;
		std::cout << baseline + " does not equal " + test << std::endl;
	}
}

