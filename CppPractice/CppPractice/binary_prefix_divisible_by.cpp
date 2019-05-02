#include<vector>
using namespace std;

class Solution {
public:
	vector<bool> prefixesDivBy5(vector<int>& A) {
		int sum = 0;
		vector<bool> answer;
		for (int i = 0; i < A.size(); i++) {
			sum = (sum * 2 + A[i]) % 5;
			if (sum % 5 == 0) {
				answer.push_back(true);
			}
			else {
				answer.push_back(false);
			}
		}
		return answer;
	}
};