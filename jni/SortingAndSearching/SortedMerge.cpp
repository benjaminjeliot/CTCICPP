//
// SortingAndSearching/SortedMerge.cpp
//

#include <algorithm>
#include <iostream>
#include <vector>
#include "SortedMerge.h"

std::vector<int> SortedMerge::Merge(std::vector<int> list1, std::vector<int> list2) {
	std::vector<int> merged(list1.size() + list2.size());
	int left = 0;
	int right = 0;
	int index = 0;
	while ((left < list1.size()) && (right < list2.size())) {
		if (list1[left] < list2[right]) {
			merged[index] = list1[left];
			++left;
		} else {
			merged[index] = list2[right];
			++right;
		}
		++index;
	}
	std::copy(list1.cbegin() + left, list1.cend(), merged.begin() + index);
	std::copy(list2.cbegin() + right, list2.cend(), merged.begin() + index);
	//System.arraycopy(list1, left, merged, index, list1.size() - left);
	//System.arraycopy(list2, right, merged, index, list2.size() - right);
	return merged;
}

