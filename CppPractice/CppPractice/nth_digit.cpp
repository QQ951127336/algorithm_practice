#include<cmath>

class Solution {
public:
	int findNthDigit(int n) {
		long long sum = 0;
		long long pre = sum;
		int count = 0;
		while (sum < n) {
			pre = sum;
			sum = sum + (long long)pow(10, count) * 9 * (count + 1);
			++count;
		}
		long long start = n - pre;
		long long time = start / count;
		long long left = start % count;
		long long number = 0;
		for (int i = 0; i < count - 1; i++) {
			number = number * 10 + 9;
		}
		number = number + time;
		if (left == 0) {
			return number % 10;
		}
		else {
			number = number + 1;
			for (int i = count; i > left; i--) {
				number = number / 10;
			}
			return number % 10;
		}


	}
};