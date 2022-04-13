#pragma once
#include <vector>
#include <ctime>

class RandomizedSet {
public:
	RandomizedSet();

	bool insert(int val);

	bool remove(int val);

	int getRandom();
private:
	int size;
	std::vector<int> vec;
};