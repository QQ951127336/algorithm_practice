#include<vector>
using namespace std;

class Solution {
public:
	double findMaxAverage(vector<int>& nums, int k) {
		double sum = 0;
		double max = 0;
		double aver = 0;
		for (int i = 0; i < k; i++) {
			sum += nums[i];
		}
		max = (double)sum / k;
		aver = max;
		for (int i = 1; i < nums.size() - k + 1; i++) {
			sum = sum - nums[i - 1] + nums[i - 1 + k];
			aver = sum / k;
			if (aver > max)
				max = aver;
		}
		return max;

	}
};