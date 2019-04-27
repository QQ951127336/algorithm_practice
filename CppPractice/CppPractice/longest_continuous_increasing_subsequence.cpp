#include <vector>

using namespace std;
class Solution {
public:
	int findLengthOfLCIS(vector<int>& nums) {
		if (nums.empty())
			return 0;
		int max = 0;
		int count = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (i == 0) {
				max = 1;
				count = 1;
			}
			else {
				if (nums[i] > nums[i - 1]) {
					count++;
					if (count > max) {
						max = count;
					}
				}
				else {
					count = 1;
				}
			}
		}
		return max;
	}
};