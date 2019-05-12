#include<cctype>
#include<string>
using namespace std;


class Solution {
public:
	int countSegments(string s) {
		int count = 0;
		int length = 0;
		for (int i = 0; i < s.length(); i++) {
			if (isspace(s[i])) {

				if (length != 0) {
					++count;
					length = 0;
				}

			}
			else {
				++length;
			}
		}
		if (length != 0)
			++count;
		return count;
	}
};