//
// SortingAndSearching/SortedMergeTest.cpp
//

#include <iostream>
#include "DummyUnit.h"
#include "SortedMerge.h"
#include "SortedMergeTest.h"

void SortedMergeTest::MergeEmptyLists() {
	std::vector<int> list1;
	std::vector<int> list2;
	std::vector<int> expecteds;
	std::vector<int> merged = SortedMerge::Merge(list1, list2);
	DummyUnit::assertArrayEquals(expecteds, merged);
}	

void SortedMergeTest::MergeSingleElementLists() {
	std::vector<int> list1 = {8};
	std::vector<int> list2 = {5};
	std::vector<int> expecteds = {5, 8};
	std::vector<int> merged = SortedMerge::Merge(list1, list2);
	DummyUnit::assertArrayEquals(expecteds, merged);
}
	
void SortedMergeTest::MergeIdenticalLists() {
	std::vector<int> list1 = {1, 2, 3, 4, 5};
	std::vector<int> list2 = {1, 2, 3, 4, 5};
	std::vector<int> expecteds = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
	std::vector<int> merged = SortedMerge::Merge(list1, list2);
	DummyUnit::assertArrayEquals(expecteds, merged);
}
	
void SortedMergeTest::MergeInterleavedLists() {
	std::vector<int> list1 = {1, 3, 5, 7, 9};
	std::vector<int> list2 = {0, 2, 4, 6, 8};
	std::vector<int> expecteds = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> merged = SortedMerge::Merge(list1, list2);
	DummyUnit::assertArrayEquals(expecteds, merged);
}
	
void SortedMergeTest::MergeNegativeNumberLists() {
	std::vector<int> list1 = {-5, -4, -3, -2, -1, 2, 3};
	std::vector<int> list2 = {-2, -1, 2, 3, 5, 9};
	std::vector<int> expecteds = {-5, -4, -3, -2, -2, -1, -1, 2, 2, 3, 3, 5, 9};
	std::vector<int> merged = SortedMerge::Merge(list1, list2);
	DummyUnit::assertArrayEquals(expecteds, merged);
}

void SortedMergeTest::SortedMergeTests() {
	std::cout << "SortedMergeTest" << std::endl;
	MergeEmptyLists();
	MergeSingleElementLists();
	MergeIdenticalLists();
	MergeInterleavedLists();
	MergeNegativeNumberLists();
}

