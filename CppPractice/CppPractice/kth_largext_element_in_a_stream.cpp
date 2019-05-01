#include<vector>
#include<algorithm>
#include<queue>

using namespace std;


class KthLargest {
public:
	priority_queue<int, vector<int>, greater<int>> save;
	int valueK;
	KthLargest(int k, vector<int>& nums) {
		sort(nums.begin(), nums.end());
		if (!nums.empty())
			for (int i = 0; i < k && ((int)nums.size() - 1 - i) >= 0; i++) {
				save.push(nums[nums.size() - 1 - i]);
			}
		valueK = k;
	}

	int add(int val) {
		if (save.empty() || save.size() < valueK) {
			save.push(val);
		}
		else if (val > save.top()) {
			save.pop();
			save.push(val);
		}
		return save.top();
	}
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */