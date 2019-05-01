#include<vector>
#include<queue>

using namespace std;
class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		queue<int> save;

		for (int i = nums.size() - 1; i >= 0; i--) {
			save.push(nums[i]);
		}
		for (int i = 0; i < k; i++) {
			save.push(save.front());
			save.pop();
		}
		int count = 0;
		while (!save.empty()) {
			nums[nums.size() - 1 - count++] = save.front();
			save.pop();
		}
	}
};