class Solution {
public:
	bool isPerfectSquare(int num) {
		return dichotomy(0, num, num);
	}
	bool dichotomy(int left, int right, int aim) {
		if (left > right)
			return false;
		long long mid = (right - left) / 2 + left;
		long long mid2 = mid * mid;
		if (mid2 == aim)
			return true;
		else if (mid2 < aim) {
			return dichotomy(mid + 1, right, aim);
		}
		else
			return dichotomy(left, mid - 1, aim);
	}
};