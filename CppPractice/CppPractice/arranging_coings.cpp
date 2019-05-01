#include<cmath>

class Solution {
public:
	int arrangeCoins(int n) {
		long long sum = (long long)n * 2;
		long long row = (long long)sqrt(sum);
		for (; row >= 0; row--) {
			if (row*row + row <= sum)
				return row;
		}
		return 0;

	}
};