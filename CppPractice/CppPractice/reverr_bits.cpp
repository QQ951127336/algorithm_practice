#include<stdint.h>
using namespace std;
class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
		uint32_t save = 0;
		int mid = 0;
		for (int i = 0; i < 32; i++) {
			mid = n % 2;
			save = save * 2 + mid;
			n /= 2;
		}
		return save;
	}
};