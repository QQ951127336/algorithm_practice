#pragma once
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		int length = A.size();
		for (int i = 0; i < A.size(); i++) {
			for (int j = 0; j < A[i].size(); j++) {
				A[i][j] = A[i][j] ^ 1;
			}
			reverse(A[i].begin(), A[i].end());
		}
		return A;
	}
};