#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	bool canThreePartsEqualSum(vector<int>& A) {
		int count = 0;
		for (int i = 0; i < A.size(); i++) {
			count += A[i];
		}
		if (count % 3 != 0)
			return false;
		int aim = count / 3;
		int leftSum = 0, rightSum = 0, left = 0, right = A.size() - 1;
		while (left <= right) {
			if (leftSum != aim) {
				leftSum += A[left++];
			}

			if (rightSum != aim) {
				rightSum += A[right--];
			}
			if (leftSum == aim && rightSum == aim) {
				return true;
			}
		}
		cout << "---" << endl;
		return false;

	}

};