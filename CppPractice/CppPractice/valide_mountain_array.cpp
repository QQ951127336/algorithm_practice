#include<vector>

using namespace std;


class Solution {
public:
	bool validMountainArray(vector<int>& A) {
		if (A.size() < 3)
			return false;
		bool right = false;
		bool left = false;

		for (int i = 0; i < A.size() - 1; i++) {
			if (A[i] > A[i + 1]) {
				if (!left) {
					return false;
				}
				else {
					right = true;
				}
			}
			else if (A[i] < A[i + 1]) {
				if (right)
					return false;
				else {
					left = true;
				}
			}
			else {
				return false;
			}
		}
		if (left && right)
			return true;
		else
			return false;
	}
};