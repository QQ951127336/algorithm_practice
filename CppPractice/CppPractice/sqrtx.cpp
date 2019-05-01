class Solution {
public:
	int mySqrt(int x) {
		long long left = 0, right = x;
		while (left < right) {
			long long mid = (right - left) / 2 + left;
			long long sum = mid * mid;
			if (sum < x) {
				left = mid + 1;
			}
			else if (sum > x) {
				right = mid - 1;
			}
			else {
				return mid;
			}
		}
		while (left*left > x) {
			--left;
		}
		return left;
	}
};