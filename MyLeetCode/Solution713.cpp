#include"Solution713.h"

int Solution713::numSubarrayProductLessThanK(std::vector<int> &nums, int k) {
	int result = 0;

	for (int i = 0; i < nums.size(); ++i) {
		int counts = nums[i];
		int temp_i = i;
		while (counts < k) {
			result++;
			if (++i == nums.size()) {

				break;
			}
			counts *= nums[i];
		}
		// while循环完了后，把i还原到进入之前的值
		i = temp_i;
	}
	
	return result;
}