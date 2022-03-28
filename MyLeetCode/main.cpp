#include <iostream>
#include "Solution463.h"
#include "Solution693.h"


int func463() {
	std::vector<std::vector<int>> test_grid = { {0,1,0,0}, {1,1,1,0}, {0,1,0,0}, {1,1,0,0} };
	Solution463 solution;
	int out = solution.islandPerimeter(test_grid);
	return out;
}

bool func693() {
	int test_num = 5;   // 修改这个数字测试
	Solution693 solution;
	bool out = solution.hasAlternatingBits(test_num);
	return out;
}

int main(int argc, char** argv) {
	//int out = func463();
	bool out = func693();



	std::cout << out << std::endl;
	system("pause");
	return 0;
}