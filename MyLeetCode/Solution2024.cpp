#include "Solution2024.h"
#include <iostream>

int Solution2024::maxConsecutiveAnswers(std::string answerKey, int k) {
	
	// 不能用 char letter : "TF"  这样会循环三次的，这是C风格的字符串，后面还有一个标志着结束的字符
	std::string loop_chars = "TF";
	// 用T算一次最大，再用F算一次最大，作比较
	int origin_k = k;  // 备份最开始的k值
	unsigned int result = 0;   // 结果

	for (char letter : loop_chars) {
		for (size_t i = 0; i < answerKey.size(); ++i) {
			unsigned temp_max = 0;  // 每向右移动一次后，要重置这个数
			// 不但每次循环 T、F时，都要把 k 还原成原来的值，向右移动后，也要重置k
			k = origin_k;
			for (std::string::const_iterator iter = answerKey.cbegin() + i; iter != answerKey.cend(); ++iter) {
				if (*iter == letter)
					++temp_max;
				else if (k != 0) {
					++temp_max;
					--k;
				}
				else {
					if (result < temp_max)
						result = temp_max;
					break;  // 此时就退出循环，再从第二位开始
				}
				if (result < temp_max)
					result = temp_max;   // 如果没进去else，也要去对比
			}
		}
	}
	return result;
}