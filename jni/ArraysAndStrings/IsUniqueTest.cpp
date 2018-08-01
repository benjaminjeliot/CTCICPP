//
// IsUnique/IsUniqueTest.cpp
//

#include <iostream>
#include "IsUniqueTest.h"
#include "IsUnique.h"
#include "DummyUnit.h"

void IsUniqueTest::IsUniqueSortTest() {
	DummyUnit::assertEquals(false, IsUnique::IsUniqueSort("aaaa"));
	DummyUnit::assertEquals(false, IsUnique::IsUniqueSort("aaab"));
	DummyUnit::assertEquals(false, IsUnique::IsUniqueSort("abcc"));
	DummyUnit::assertEquals(true, IsUnique::IsUniqueSort("a"));
	DummyUnit::assertEquals(true, IsUnique::IsUniqueSort("a"));
	DummyUnit::assertEquals(true, IsUnique::IsUniqueSort("ab"));
	DummyUnit::assertEquals(false, IsUnique::IsUniqueSort("abca"));
}

void IsUniqueTest::IsUniqueHashMapTest() {
	DummyUnit::assertEquals(false, IsUnique::IsUniqueHashMap("aaaa"));
	DummyUnit::assertEquals(false, IsUnique::IsUniqueHashMap("aaab"));
	DummyUnit::assertEquals(false, IsUnique::IsUniqueHashMap("abcc"));
	DummyUnit::assertEquals(true, IsUnique::IsUniqueHashMap("a"));
	DummyUnit::assertEquals(true, IsUnique::IsUniqueHashMap("a"));
	DummyUnit::assertEquals(true, IsUnique::IsUniqueHashMap("ab"));
	DummyUnit::assertEquals(false, IsUnique::IsUniqueHashMap("abca"));
}

void IsUniqueTest::IsUniqueTests() {
	std::cout << "IsUniqueTest" << std::endl;
	//IsUniqueSortTest();
	IsUniqueHashMapTest();
}

