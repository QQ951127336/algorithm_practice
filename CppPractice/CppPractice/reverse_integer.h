#pragma once
#include <limits>
#include <string>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		long long oldValue = x;
		bool flag = false;
		if (x < 0) {
			flag = true;
			oldValue = oldValue * -1;
		}
		string oldStr = to_string(oldValue);
		string newStr = "";
		int length = oldStr.length();
		long long newValue = 0;
		for (int index = length - 1; index >= 0; index--) {
			newStr += oldStr[index];
			newValue = newValue * 10 + (oldStr[index] - '0');
		}
		
		if (flag) {
			newValue = -1 * newValue;
			if (newValue < INT_MIN)
				return 0;
		}
		else {
			if (newValue > INT_MAX)
				return 0;
		}
		return newValue;
	}
};