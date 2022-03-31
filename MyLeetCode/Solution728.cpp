#include "Solution728.h"

std::vector<int> Solution728::selfDividingNumbers(int left, int right) {
	std::vector<int> result;
	for (size_t num = left; num <= right; ++num) {
		size_t num_bak = num;
		bool flag = true;
		while (num >= 10) {  // 小于10的数一定是
			
			size_t judge = num_bak % 10;
			if ((judge == 0) || (num % judge != 0)) {
				flag = false;
				break;
			}
		
			if ((num_bak /= 10) == 0)
				break;
		}
		if (flag)
			result.push_back(num);
	}
	return result;
}