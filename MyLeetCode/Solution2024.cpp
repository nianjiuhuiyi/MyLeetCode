#include "Solution2024.h"
#include <iostream>

int Solution2024::maxConsecutiveAnswers(std::string answerKey, int k) {
	
	int origin_k = k;
	unsigned int result = 0;
	// ������ char letter : "TF"  ������ѭ�����εģ�����C�����ַ��������滹��һ����־�Ž������ַ�
	std::string loop_chars = "TF";
	// ��T��һ���������F��һ��������Ƚ�
	for (char letter : loop_chars)  { 
		unsigned int max_t = 0, temp_max_t = 0;
		for (char c : answerKey) {
			if (c == letter) {
				temp_max_t += 1;
			}
			else {
				if (max_t < temp_max_t) {
					max_t = temp_max_t;
				}
				if (k == 0) {
					// k����0������k����ʱ����ֵ��Ϊ0���൱�����¿�ʼ������Ҳ����ʱ����ֵ��¼�ˣ�
					temp_max_t = 0;
					k = origin_k;
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

		// ѭ�����ˣ�k���ܻ�û���꣬�м���k���ܱ伸��ֵ����ֱ�Ӽӵ�result��
		if (k != 0) {
			result += k;
		}
	}

	// ��Ϊ�����k�����ܵ��³���ԭ���ַ����ĳ���
	if (result > answerKey.size()) {
		result = answerKey.size();
	}


	return result;
}