//
// ArraysAndStrings/IsUnique.cpp
//

#include <string>
#include <unordered_map>
#include "IsUnique.h"

bool IsUnique::IsUniqueSort(std::string input) {
	return true;
}
	
bool IsUnique::IsUniqueHashMap(std::string input) {
	std::unordered_map<char, bool> seenBefore(input.size());
	for(char character: input) {
		if (seenBefore[character] == true) {
			return false;
		} else {
			seenBefore[character] = true;
		}
	}
	return true;
}

