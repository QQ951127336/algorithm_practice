#include<cmath>
#include<set>
using namespace std;
class Solution {
public:
	bool checkPerfectNumber(int num) {
		int limit = sqrt(num);
		set<int> save;
		if (num == 1)
			return false;

		save.insert(1);
		for (int i = 2; i <= limit; i++) {
			if (num%i == 0) {
				save.insert(i);
				save.insert(num / i);
			}
		}
		int sum = 0;
		for (int i : save) {
			sum += i;
		}
		if (sum == num)
			return true;
		return false;
	}
};