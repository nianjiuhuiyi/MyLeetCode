#include "Solution796.h"

/*
����python�Ĵ���Ľ��������
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
		//if ((s = s.substr(1) + s[0]) == goal) {  // ��Ҳ�ǿ��Եģ�Ϊ�˰�ȫ��֤������һ��������Ӱ�
			return true;
		}
	}
	return false;


	// ���µĽ���ǹٷ��Ĳ��������Ӽ����ˣ�������find��������ѭ���ɣ�(���Ȳ��ȣ�ֱ�Ӳ�����)
	//return (s.size() == goal.size()) && ((s + s).find(goal) != std::string::npos);

}