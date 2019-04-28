#include<string>
using namespace std;
class Solution {
public:
	bool repeatedSubstringPattern(string s) {
		int length = s.length();
		if (length % 2 == 0) {
			string left = s.substr(0, length / 2);
			string right = s.substr(length / 2, length / 2);
			if (left == right)
				return true;
		}
		for (int i = length / 2; i > 0; i--) {
			if (i % 2 == 0)
				continue;
			if (i == 1) {
				for (int i = 0; i < length - 1; i++) {
					if (s[i] != s[i + 1])
						return false;
				}
				return true;
			}
			else if (length%i == 0) {
				string left = s.substr(0, length / i * (i / 2));
				string right = s.substr(length / i * (i / 2 + 1), length / i * (i / 2));
				// cout<<"----"<<left <<" "<<right<<endl;
				if (left != right)
					continue;
				left = s.substr(0, length / i);
				right = s.substr(length / i * (i / 2), length / i);
				// cout<<"++++"<<left <<" "<<right<<endl;
				if (left == right)
					return true;
			}
		}

		return false;
	}

};