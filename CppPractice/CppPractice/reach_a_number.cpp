#include <cmath>
class Solution {
public:
	int reachNumber(int target) {
		int n = 0;
		int sum = 0;
		target = abs(target);
		while (sum < target) {
			sum = sum + (++n);
		}
		int del = sum - target;
		if (del != 0 && del % 2 != 0) {
			if (n % 2 == 0) {
				n += 1;
			}
			else {
				n += 2;
			}

		}
		return n;
	}
};