#include<vector>

using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int carry_bit = 0;
		int sum = 0;
		int add = 0;
		for (int i = digits.size() - 1; i >= 0; i--) {
			if (i == digits.size() - 1)
				add = 1;
			else
				add = 0;
			sum = digits[i] + add + carry_bit;
			digits[i] = sum % 10;
			carry_bit = sum / 10;
			if (carry_bit == 0 && add == 0)
				break;
		}
		if (carry_bit == 1) {
			digits.insert(digits.begin(), 1);
		}
		return digits;
	}
};