#pragma once
#include "di_string_match.h"

using namespace std;

vector<int> Solution::diStringMatch(string S) {
	int length = S.length();
	int min = 0;
	int max = length;
	vector<int> result;
	for (int i = 0; i < length; i++) {
		if (S[i] == 'I') {
			result.push_back(min++);
		}
		else if (S[i] == 'D') {
			result.push_back(max--);
		}
	}
	result.push_back(min++);
	return result;


}