#include<vector>

using namespace std;

class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		if (nums.size() <= 2) {
			return -1;
		}
		int sum = 0;
		vector<int> left;
		for (int i = 0; i < nums.size(); i++) {
			sum += nums[i];
			left.push_back(sum);
		}
		for (int i = 0; i < nums.size(); i++) {
			if (i == 0 || i == nums.size() - 1) {
				if (sum - nums[i] == 0)
					return i;
			}
			else if (left[i - 1] * 2 + nums[i] == sum)
				return i;
		}
		return -1;

	}
};