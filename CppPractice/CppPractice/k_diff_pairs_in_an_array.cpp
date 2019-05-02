#include<map>
#include<vector>

using namespace std;

class Solution {
public:
	int findPairs(vector<int>& nums, int k) {
		map<int, int> save;

		int answer = 0;
		for (int num : nums) {

			save[num]++;
		}

		if (k == 0) {
			for (map<int, int>::iterator itr = save.begin(); itr != save.end(); itr++) {
				if (itr->second > 1) {
					answer = answer + 1;
				}
			}
			return answer;
		}
		else if (k < 0) {
			return 0;
		}


		for (map<int, int>::iterator itr = save.begin(); itr != save.end(); itr++) {
			if (save.count(itr->first + k)) {
				++answer;
			}
		}
		return answer;

	}
	int dex(int n) {
		int sum = 1;
		while (n != 0) {
			sum = sum * n--;
		}
		return sum / 2;
	}
};