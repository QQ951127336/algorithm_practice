#include<string>
#include<vector>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {

		string answer = "";
		if (strs.empty())
			return answer;
		for (int i = 0; i < strs[0].length(); i++) {
			bool find = true;
			for (int j = 0; j < strs.size() - 1; j++) {
				if (strs[j + 1].length() <= i) {
					find = false;
					break;
				}
				if (strs[j][i] != strs[j + 1][i]) {
					find = false;
					break;
				}

			}
			if (find) {
				answer.push_back(strs[0][i]);
			}
			else {
				break;
			}
		}
		return answer;
	}
};