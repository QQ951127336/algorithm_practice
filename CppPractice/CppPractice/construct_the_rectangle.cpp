#include<vector>

using namespace std;

class Solution {
public:
	vector<int> constructRectangle(int area) {
		int mid = sqrt(area);
		vector<int> save;
		if (mid*mid == area) {
			save.push_back(mid);
			save.push_back(mid);
		}
		else {
			for (int i = mid + 1; i > 0; i--) {
				if (area%i == 0) {
					if (i < area / i) {
						save.push_back(area / i);
						save.push_back(i);
					}
					else {
						save.push_back(i);
						save.push_back(area / i);

					}

					break;
				}
			}
		}
		return save;
	}
};