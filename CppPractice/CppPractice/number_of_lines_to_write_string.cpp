#include<vector>
using namespace std;
class Solution {
public:
	vector<int> numberOfLines(vector<int>& widths, string S) {
		int sum = 0;
		int rows = 0;
		for (int i = 0; i < S.length(); i++) {
			if (rows == 0)
				rows = 1;
			if (sum + widths[S[i] - 'a'] > 100) {
				sum = 0;
				rows++;
			}
			sum += widths[S[i] - 'a'];

		}

		vector<int> result;
		result.push_back(rows);
		result.push_back(sum);
		return result;
	}
}; 


