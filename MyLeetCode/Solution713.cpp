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
		// whileѭ�����˺󣬰�i��ԭ������֮ǰ��ֵ
		i = temp_i;
	}
	
	return result;
}