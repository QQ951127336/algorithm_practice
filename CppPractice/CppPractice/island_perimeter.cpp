#include<vector>

using namespace std;

class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) {
		int sum = 0;
		for (int i = 0; i < grid.size(); i++) {
			for (int j = 0; j < grid[i].size(); j++) {
				if (grid[i][j] == 1) {
					if (i == grid.size() - 1 || grid[i + 1][j] == 0) {
						sum++;
					}
					if (i == 0 || grid[i - 1][j] == 0) {
						sum++;
					}
					if (j == 0 || grid[i][j - 1] == 0) {
						sum++;
					}
					if (j == grid[i].size() - 1 || grid[i][j + 1] == 0) {
						sum++;
					}
				}
			}
		}
		return sum;
	}
};