#include <iostream>
#include "Solution463.h"
#include "Solution693.h"
#include "Solution2024.h"
#include "Solution728.h"
#include "Solution796.h"


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

int func2024() {
	// 算法基本没问题了，但是很长的那个字符串，leetcode上超时了
	std::string answerKey = "FFFTTFTTFT";
	int k = 3;
	Solution2024 solution;
	int out = solution.maxConsecutiveAnswers(answerKey, k);
	return out;
}

std::vector<int> func728() {
	Solution728 solution;
	std::vector<int> result = solution.selfDividingNumbers(47, 85);
	return result;
}

bool func796() {
	std::string a("abcde"), b("cdeab");
	Solution796 solution;
	bool out = solution.rotateString(a, b);
	return out;
}

int main(int argc, char** argv) {
	//int out = func463();
	//bool out = func693();
	//int out = func2024();
	//std::vector<int> out = func728();
	
	bool out = func796();

	std::cout << out << std::endl;
	system("pause");
	return 0;
}