//
// DummyUnit/DummyUnit.h
//

#ifndef DUMMYUNIT_DUMMYUNIT_H_
#define DUMMYUNIT_DUMMYUNIT_H_

#include <string>
#include <vector>

class DummyUnit {
public:
	static void assertEquals(std::string baseline, std::string test);
	static void assertEquals(bool baseline, bool test);
	template<typename T> static void assertArrayEquals(const std::vector<T>& expecteds, const std::vector<T>& actuals);
};

template<typename T> void DummyUnit::assertArrayEquals(const std::vector<T>& expecteds, const std::vector<T>& actuals) {
	if (expecteds.size() != expecteds.size()) {
		std::cout << "TEST FAILED!";
		std::cout << "Arrays are not the same length";
		return;
	}
	for(int i = 0; i < expecteds.size(); ++i) {
		if (expecteds[i] != actuals[i]) {
			std::cout << "TEST FAILED!" << std::endl;
			std::cout << "expecteds[i] does not equal actuals[i]" << std::endl;
			std::cout << "expecteds[" << i << "] = " << expecteds[i] << std::endl;
			std::cout << "actuals[" << i << "] = " << actuals[i] << std::endl;
			return;
		}
	}
	std::cout << "TEST PASSED!" << std::endl;
}

#endif  // DUMMYUNIT_DUMMYUNIT_H_

