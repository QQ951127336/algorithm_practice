#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	vector<int> numMovesStones(int a, int b, int c) {
		vector<int> answer;
		vector<int> tmp({ a, b, c });
		sort(tmp.begin(), tmp.end());
		a = tmp[0];
		b = tmp[1];
		c = tmp[2];
		int max = 0, min = 0;
		max = max + b - a - 1;
		max = max + c - b - 1;
		if (max != 0) {

			if (b - a > 2 && c - b > 2) {
				min = 2;
			}
			else {
				min = 1;
			}
		}
		answer.push_back(min);
		answer.push_back(max);
		return answer;
	}
};