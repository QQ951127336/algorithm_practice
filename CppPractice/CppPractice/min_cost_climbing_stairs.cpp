#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:

	int minCostClimbingStairs(vector<int>& cost) {
		int minPath[1003];
		memset(minPath, -1, sizeof(minPath));
		traverse(cost, minPath, 0);
		// for(int i=0; i< 100; i++){
		//     cout<< minPath[i] << " ";
		// }
		return minPath[0] < minPath[1] ? minPath[0] : minPath[1];
	}

	int traverse(vector<int>& cost, int minPath[1003], int index) {
		if (index > cost.size())
			return 0;
		if (index > 0 && minPath[index] != -1)
			return minPath[index];
		int one = traverse(cost, minPath, index + 1);
		int two = traverse(cost, minPath, index + 2);
		int min = one > two ? two : one;
		if (index != 0)
			minPath[index] = cost[index - 1] + min;
		else {
			minPath[index] = 0 + min;
			// cout<< one << " " << two << endl;
		}
		return minPath[index];
	}
};