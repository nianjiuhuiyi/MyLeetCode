#include <iostream>
#include "Solution463.h"


int func463() {
	std::vector<std::vector<int>> grid = { {0,1,0,0}, {1,1,1,0}, {0,1,0,0}, {1,1,0,0} };
	Solution463 solution;
	int out = solution.islandPerimeter(grid);
	return out;
}

int main(int argc, char** argv) {
	int out = func463();
	std::cout << out << std::endl;
	system("pause");
	return 0;
}