#include <stdio.h>
#include <stdlib.h>

int left_sum(int* begin, int* end) {
	int n = end - begin;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += begin[i];
	}
	return ans;
}



