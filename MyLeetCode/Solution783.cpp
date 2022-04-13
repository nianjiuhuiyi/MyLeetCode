#include "Solution783.h"

RandomizedSet::RandomizedSet() {
	RandomizedSet::size = 0;
}

bool RandomizedSet::insert(int val) {
	for (int k : vec) {
		if (k == val) return false;
	}
	// 不存在就向里面插入
	RandomizedSet::vec.push_back(val);
	RandomizedSet::size++;
	return true;
}

bool RandomizedSet::remove(int val) {
	for (std::vector<int>::const_iterator iter = vec.cbegin(); iter != vec.cend(); ++iter) {
		if (*iter == val) {
			vec.erase(iter);
			--size;
			return true;
		}	
	}
	return false;
}

int RandomizedSet::getRandom() {
	srand((unsigned int)time(NULL));
	int result = vec.at(rand() % size);
	return result;
}
