#pragma once
#include"delete_columns_to_make_sorted.h"

int Solution::minDeletionSize(vector<string>& A) {
	int count = 0;
	for (int i = 0; i < A[0].length(); i++) {
		for (int j = 0; j < A.size() - 1; j++) {
			if (A[j][i] - A[j + 1][i] > 0) {
				count++;
				break;
			}
		}
	}
	return count;
}