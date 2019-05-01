#include<cstdio>
#include<iostream>
using namespace std;

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
	int guessNumber(int n) {
		int left = 1, right = n;
		int mid = (right - left) / 2 + left;
		int answer = 0;
		int count = 0;
		do {
			answer = guess(mid);
			if (answer < 0) {
				right = mid - 1;

			}
			else if (answer > 0) {
				left = mid + 1;

			}
			else {
				return mid;
			}
			mid = (right - left) / 2 + left;

			cout << mid << endl;
		} while (answer != 0 && count < 10);
		return n;
	}
};