#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
	int twoCitySchedCost(vector<vector<int>>& costs) {
		sort(costs.begin(), costs.end(), compare);
		int sum = 0;
		int half = costs.size() / 2;
		for (int i = 0; i < costs.size(); i++) {
			if (i < half) {
				sum += costs[i][0];
			}
			else {
				sum += costs[i][1];
			}
		}
		return sum;
	}

	static bool compare(vector<int> a, vector<int> b) {
		return (a[0] - a[1]) < (b[0] - b[1]);
	}
};