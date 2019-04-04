#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;


class Solution {
public:
	char findTheDifference(string s, string t) {
		int s_sum = 0, t_sum = 0;
		for (int i = 0; i < s.size(); i++) {
			cout << s[i] << " " << t[i] << endl;
			s_sum = s_sum + (s[i] - 'a');
			t_sum = t_sum + (t[i] - 'a');
		}

		t_sum = t_sum + (t[s.size()] - 'a') - s_sum;

		return 'a' + t_sum;
	}
};