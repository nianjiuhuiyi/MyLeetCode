#include "Solution693.h"

bool Solution693::hasAlternatingBits(int n) {
	bool flag = true;

	int first_num = n % 2;
	n = n / 2;

	while (n > 0) {
		int seconde_num = n % 2;
		if (first_num == seconde_num) {
			flag = false;
			break;
		}
		first_num = seconde_num;
		n /= 2;
	}
	return flag;
}