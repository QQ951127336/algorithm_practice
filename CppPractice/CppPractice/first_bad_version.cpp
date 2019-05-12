// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		if (isBadVersion(1)) {
			return 1;
		}
		if (!isBadVersion(n - 1))
			return n;
		long left = 2, right = n;
		long mid = (right - left) / 2 + left;
		bool result = false;
		bool pre = false;
		do {
			result = isBadVersion(mid);
			pre = isBadVersion(mid - 1);
			if (!pre && result)
				return mid;

			if (result == true) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
			mid = (right - left) / 2 + left;
		} while (left <= right);
		return mid;
	}
};