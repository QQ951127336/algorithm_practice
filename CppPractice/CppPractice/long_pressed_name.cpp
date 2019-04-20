#include <string>
using namespace std;

class Solution {
public:
	bool isLongPressedName(string name, string typed) {
		int  right = 0;
		if (typed.length() < name.length())
			return false;
		for (int i = 0; i < name.length(); i++) {
			if (typed[right] == name[i]) {
				right++;
				continue;
			}
			else {
				while (typed[right] == typed[right - 1] && right > 0 && right < typed.length()) {
					right++;
				}
				if (right == 0 || right >= typed.length())
					return false;
				if (typed[right] == name[i]) {
					right++;
					continue;
				}
				else {
					return false;
				}
			}
		}
		return true;
	}
};