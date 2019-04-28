#include<vector>
#include<map>
using namespace std;

class Solution {
public:
	int rob(vector<int>& nums) {
		map<int, int> save;
		traverse(0, nums, save);
		return save[0];
	}
	int traverse(int index, vector<int>& nums, map<int, int>&save) {
		if (index >= nums.size())
			return 0;
		if (save.count(index)) {
			return save[index];
		}
		else {
			int left = nums[index] + traverse(index + 2, nums, save);
			int right = traverse(index + 1, nums, save);
			if (left > right) {
				save[index] = left;
			}
			else {
				save[index] = right;
			}
			return save[index];
		}
	}
};