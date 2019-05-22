#include<string>
#include<algorithm>

using namespace std;
class Solution {
public:
	int repeatedStringMatch(string A, string B) {
		string saveA = A;
		int count = 1;
		while (A.length() <= B.length()) {
			if (A == B)
				return count;
			A = A + saveA;
			++count;
		}
		if (A.find(B) == -1) {
			A = A + saveA;
			++count;
			if (A.find(B) == -1)
				return -1;
			return count;
		}
		else {
			return count;
		}
	}
};