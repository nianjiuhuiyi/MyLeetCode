#include "Solution2024.h"
#include <iostream>

int Solution2024::maxConsecutiveAnswers(std::string answerKey, int k) {
	
	int origin_k = k;
	unsigned int result = 0;
	// ������ char letter : "TF"  ������ѭ�����εģ�����C�����ַ��������滹��һ����־�Ž������ַ�
	std::string loop_chars = "TF";
	// ��T��һ���������F��һ��������Ƚ�
	for (char letter : loop_chars)  { 

		bool flag = true;   // ����Ϊ�˴���answerKey = "TFFT"; k=1���������ݣ�����ִ��k = origin_k;������������һ��k����������һ��flag

		unsigned int max_t = 0, temp_max_t = 0;
		for (char c : answerKey) {

			flag = true;  // ��֤ÿ��Ϊtru��ֻ�����һ���Ƿ������k==0���ж�����ȥ�˾���Ϊfalse

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
		
		// ѭ�����ˣ�k���ܻ�û���꣬�м���k���ܱ伸��ֵ����ֱ�Ӽӵ�result��
		// ͬʱ���k�������� k = origin_k; ��õ�k
		std::cout << k  << std::endl;
		std::cout << flag  << std::endl;
		std::cout << result  << std::endl;
		std::cout << "***********" << std::endl;
		if (k != 0 && flag) {
			result += k;
		}
	}

	// ��Ϊ�����k�����ܵ��³���ԭ���ַ����ĳ���
	if (result > answerKey.size()) {
		result = answerKey.size();
	}
	return result;
}