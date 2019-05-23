#include<string>
using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		int length = s.length();
		int count = 0;
		if (length == 0)
			return count;
		bool start = false;
		for (int i = length - 1; i >= 0; i--) {
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
				start = true;
				++count;
			}
			else if (start)
				return count;
		}
		return count;
	}
};