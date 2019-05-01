#include<string>

using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		if (needle.length() == 0)
			return 0;

		for (int i = 0; i < ((int)haystack.length() - (int)needle.length() + 1); i++) {
			bool find = true;
			for (int j = 0; j < needle.length(); j++) {
				if (haystack[i + j] != needle[j]) {
					find = false;
					break;
				}
			}
			if (find)
				return i;
		}
		return -1;
	}
};