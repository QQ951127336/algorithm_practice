#include<math.h>

class Solution {
public:
	bool judgeSquareSum(int c) {
		long long mid = sqrt(c) + 1;
		for (long long i = mid; i >= 0; i--) {

			int left = c - i * i;
			if (left < 0)
				continue;
			long long left_square = sqrt(left);
			// cout<<i<<" "<< left <<" "<<left_square<<endl;
			if (left_square*left_square == left)
				return true;
		}
		return false;
	}
};