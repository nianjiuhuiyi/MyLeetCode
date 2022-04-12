#include "Solution806.h"

std::vector<int> Solution806::numberOfLines(std::vector<int>& widths, std::string s) {

	std::string letters = "abcdefghijklmnopqrstuvwxyz";
	unsigned short int lens = 0;
	unsigned short int rows = 1;  // ��ô������һ��

	for (char lett : s) {
		size_t pos = letters.find_first_of(lett);
		lens += widths[pos];

		/*
		�ٷ������û��ʹ�ø����letters������ʹ�ã�lens += widths[lett - 'a'];
		Ӧ���� 'b' - 'a' = 1 ����1����ascll���ģ�c++������������������python���ǲ��е�
		
		std::cout << ('b' - 'a') << std::endl;  // �����1
		
		*/

		if (lens > 100) {
			lens = widths[pos];
			++rows;
		}
	}
	return std::vector<int>{rows, lens};
}
