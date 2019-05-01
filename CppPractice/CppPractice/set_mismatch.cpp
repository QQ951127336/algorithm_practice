#include<vector>

using namespace std;
class Solution {
public:
	vector<int> findErrorNums(vector<int>& nums) {
		int n = nums.size();
		int sum = n * (n + 1) / 2;
		vector<int> answer;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[abs(nums[i]) - 1] < 0) {
				answer.push_back(abs(nums[i]));

			}
			else {
				nums[abs(nums[i]) - 1] *= -1;
				sum -= abs(nums[i]);
			}
		}
		answer.push_back(sum);
		return answer;
	}
};