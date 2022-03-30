#include "Solution2024.h"
#include <iostream>

int Solution2024::maxConsecutiveAnswers(std::string answerKey, int k) {
	
	// ������ char letter : "TF"  ������ѭ�����εģ�����C�����ַ��������滹��һ����־�Ž������ַ�
	std::string loop_chars = "TF";
	// ��T��һ���������F��һ��������Ƚ�
	int origin_k = k;  // �����ʼ��kֵ
	unsigned int result = 0;   // ���

	for (char letter : loop_chars) {
		for (size_t i = 0; i < answerKey.size(); ++i) {
			unsigned temp_max = 0;  // ÿ�����ƶ�һ�κ�Ҫ���������
			// ����ÿ��ѭ�� T��Fʱ����Ҫ�� k ��ԭ��ԭ����ֵ�������ƶ���ҲҪ����k
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
					break;  // ��ʱ���˳�ѭ�����ٴӵڶ�λ��ʼ
				}
				if (result < temp_max)
					result = temp_max;   // ���û��ȥelse��ҲҪȥ�Ա�
			}
		}
	}
	return result;
}