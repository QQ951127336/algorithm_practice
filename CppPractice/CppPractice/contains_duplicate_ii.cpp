#include<map>
#include<vector>

using namespace std;

class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		map<int, int> save;
		for (int i = 0; i < nums.size(); i++) {
			if (!save.count(nums[i])) {
				save[nums[i]] = i;
			}
			else {
				if (i - save[nums[i]] <= k)
					return true;
				save[nums[i]] = i;
			}
		}
		return false;
	}
};