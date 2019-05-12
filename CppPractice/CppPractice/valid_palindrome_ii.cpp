#include<string>


using namespace std;
class Solution {
public:
	bool validPalindrome(string s) {
		bool canDelete = true;
		return traverse(0, (int)(s.length() - 1), s, canDelete);
	}

	bool traverse(int left, int right, string s, bool& canDelete) {
		while (left < right) {
			if (s[left] != s[right]) {
				if (!canDelete)
					return false;
				else {
					canDelete = false;
					return traverse(left + 1, right, s, canDelete) || traverse(left, right - 1, s, canDelete);
				}
			}
			++left;
			--right;
		}
		return true;
	}
};