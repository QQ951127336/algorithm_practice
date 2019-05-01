#include<vector>
#include<set>
using namespace std;

class Solution {
public:
	vector<int> powerfulIntegers(int x, int y, int bound) {
		vector<int> save;
		int i = 0, j = 0;
		int xSum = 0, ySum = 0;
		set<int> saveTmp;
		int lastXSum = -1, lastYSum = -1;
		do {
			j = 0;
			lastYSum = -1;
			xSum = pow(x, i);
			if (xSum == lastXSum)
				break;
			do {
				ySum = pow(y, j);
				// cout << lastYSum << " " << ySum<<" "<<xSum + ySum <<endl;
				if (ySum == lastYSum)
					break;

				if (xSum + ySum <= bound) {
					saveTmp.insert(xSum + ySum);
				}
				else {
					break;
				}
				++j;
				lastYSum = ySum;
			} while (xSum + ySum <= bound);
			++i;
			lastXSum = xSum;
		} while (xSum <= bound);
		save.assign(saveTmp.begin(), saveTmp.end());
		return save;
	}
};