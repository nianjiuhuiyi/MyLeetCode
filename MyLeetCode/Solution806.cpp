#include "Solution806.h"

std::vector<int> Solution806::numberOfLines(std::vector<int>& widths, std::string s) {

	std::string letters = "abcdefghijklmnopqrstuvwxyz";
	unsigned short int lens = 0;
	unsigned short int rows = 1;  // 怎么样都有一行

	for (char lett : s) {
		size_t pos = letters.find_first_of(lett);
		lens += widths[pos];

		/*
		官方解答里没再使用格外的letters，而是使用：lens += widths[lett - 'a'];
		应该是 'b' - 'a' = 1 ，这1就是ascll来的，c++里可以这样获得索引，python里是不行的
		
		std::cout << ('b' - 'a') << std::endl;  // 结果是1
		
		*/

		if (lens > 100) {
			lens = widths[pos];
			++rows;
		}
	}
	return std::vector<int>{rows, lens};
}
