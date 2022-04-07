#include "Solution796.h"

/*
这是python的代码的解决方案：
class Solution:
	def rotateString(self, s: str, goal: str) -> bool:
		for i in range(len(s)):
			s = s[1: ] + s[0]
			if s == goal:
				return True
		return False
*/

bool Solution796::rotateString(std::string s, std::string goal) {
	for (size_t i = 0; i < s.size(); ++i) {
		if ((s = s.substr(1) + s.substr(0, 1)) == goal) {
		//if ((s = s.substr(1) + s[0]) == goal) {  // 这也是可以的，为了安全保证，都用一个类型相加吧
			return true;
		}
	}
	return false;


	// 以下的解答是官方的操作，更加简单明了：，用了find，还是在循环吧，(长度不等，直接不可能)
	//return (s.size() == goal.size()) && ((s + s).find(goal) != std::string::npos);

}