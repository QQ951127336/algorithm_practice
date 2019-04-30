#include<stdio.h>
#include<vector>

using namespace std;
class Solution {
public:
	int dominantIndex(vector<int>& nums) {
		long long first = INT_MIN, second = INT_MIN;
		int index = -1;
		int count = 0;
		for (int value : nums) {
			if (first < value) {
				second = first;
				first = value;
				index = count;
			}
			else if (second < value && value < first) {
				second = value;
			}
			count++;
		}
		if (first >= 2 * second)
			return index;
		return -1;
	}
};