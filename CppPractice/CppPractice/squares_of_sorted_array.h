#pragma once
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {
		for (vector<int>::iterator iter = A.begin(); iter != A.end(); iter++) {
			*iter = *iter * *iter;
		}
		sort(A.begin(), A.end());
		return A;
	}
};