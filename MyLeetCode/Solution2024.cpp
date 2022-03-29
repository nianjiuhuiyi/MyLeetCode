#include "Solution2024.h"
#include <iostream>

int Solution2024::maxConsecutiveAnswers(std::string answerKey, int k) {
	
	int origin_k = k;
	unsigned int result = 0;
	// 不能用 char letter : "TF"  这样会循环三次的，这是C风格的字符串，后面还有一个标志着结束的字符
	std::string loop_chars = "TF";
	// 用T算一次最大，再用F算一次最大，作比较
	for (char letter : loop_chars)  { 

		bool flag = true;   // 这是为了处理answerKey = "TFFT"; k=1这样的数据，最后会执行k = origin_k;，导致下面多加一个k，所以增加一个flag

		unsigned int max_t = 0, temp_max_t = 0;
		for (char c : answerKey) {

			flag = true;  // 保证每次为tru，只管最后一次是否进到了k==0的判定，进去了就置为false

			if (c == letter) {
				temp_max_t += 1;
			}
			else {
				if (max_t < temp_max_t) {
					max_t = temp_max_t;
				}
				if (k == 0) {
					// k等于0后，重置k和暂时最大的值都为0，相当于重新开始，上面也把暂时最大的值记录了：
					temp_max_t = 0;
					k = origin_k;
					flag = false;
					continue;
				}

				if (k != 0) {
					temp_max_t += 1;
					--k;
				}
				if (max_t < temp_max_t) {
					max_t = temp_max_t;
				}
			}
		}
		if (max_t < temp_max_t) {
			max_t = temp_max_t;
		}
		if (result < max_t) {
			result = max_t;
		}
		
		// 循环完了，k可能还没用完，有几个k就能变几个值，就直接加到result中
		// 同时这个k还不能是 k = origin_k; 获得的k
		std::cout << k  << std::endl;
		std::cout << flag  << std::endl;
		std::cout << result  << std::endl;
		std::cout << "***********" << std::endl;
		if (k != 0 && flag) {
			result += k;
		}
	}

	// 因为上面加k，可能导致超出原来字符串的长度
	if (result > answerKey.size()) {
		result = answerKey.size();
	}
	return result;
}