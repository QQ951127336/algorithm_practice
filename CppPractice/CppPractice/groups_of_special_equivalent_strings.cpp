#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
	int numSpecialEquivGroups(vector<string>& A) {
		map<string, vector<string>> answers;
		for (int i = 0; i < A.size(); i++) {
			string odd = "";
			string even = "";
			for (int j = 0; j < A[i].length(); j++) {
				if (j % 2) {
					odd = odd + A[i][j];
				}
				else {
					even = even + A[i][j];
				}
			}
			sort(even.begin(), even.end());
			sort(odd.begin(), odd.end());
			even = even + odd;
			if (!answers.count(even)) {
				vector<string> tmp;
				tmp.push_back(A[i]);
				answers[even] = tmp;
			}
			else {
				answers[even].push_back(A[i]);
			}
		}
		return answers.size();
	}
};