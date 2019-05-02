#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	int findUnsortedSubarray(vector<int>& nums) {
		vector<int> tmp(nums);
		sort(tmp.begin(), tmp.end());
		int left = 0, right = nums.size() - 1;
		while (left < nums.size() && tmp[left] == nums[left]) {
			left++;
		}
		if (left >= right)
			return 0;
		while (right >= 0 && tmp[right] == nums[right]) {
			right--;
		}
		return right - left + 1;
	}
};