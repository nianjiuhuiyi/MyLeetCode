#include <iostream>
#include "Solution463.h"
#include "Solution693.h"
#include "Solution2024.h"


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
	std::string answerKey = "TTFTTFTT";
	int k = 1;

	unsigned max_t = 0;
	for (char c : answerKey) {
		if (c == 'T') {
			++max_t;
		}
		else {
			if (k != 0) {
				++max_t;
				--k;
			}
		}
	}








	//std::string answerKey = "FFFTTFTTFT";
	//int k = 3;

	Solution2024 solution;
	int out = solution.maxConsecutiveAnswers(answerKey, k);
	return out;
}

int main(int argc, char** argv) {
	//int out = func463();
	//bool out = func693();

	int out = func2024();

	//std::string answerKey = "TTFTTFTT";
	//int k = 1;

	//int origin_k = k;
	//unsigned int res = 0;
	//for (char letter : "TF") {
	//	
	//	unsigned int max_t = 0, temp_max_t = 0;
	//	for (char c : answerKey) {
	//		if (c == letter) {
	//			temp_max_t += 1;
	//		}
	//		else {
	//			if (max_t < temp_max_t) {
	//				max_t = temp_max_t;
	//			}
	//			if (k == 0) {
	//				// k等于0后，重置：
	//				temp_max_t = 0;
	//				k = origin_k;
	//				continue;
	//			}

	//			if (k != 0) {
	//				temp_max_t += 1;
	//				--k;
	//			}
	//			if (max_t < temp_max_t) {
	//				max_t = temp_max_t;
	//			}
	//		}
	//	}
	//	if (max_t < temp_max_t) {
	//		max_t = temp_max_t;
	//	}
	//	if (res < max_t) {
	//		res = max_t;
	//	}
	//}

	

	std::cout << out << std::endl;

	system("pause");
	return 0;
}