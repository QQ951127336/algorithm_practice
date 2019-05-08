#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
	int numMagicSquaresInside(vector<vector<int>>& grid) {
		int count = 0;
		cout << grid.size() << grid[0].size() << endl;
		for (int i = 0; i < (int)grid.size() - 2; i++) {
			for (int j = 0; j < (int)(grid[0].size()) - 2; j++) {
				cout << "amazing" << endl;
				bool find = true;
				if (grid[i][j] == grid[i + 1][j] || grid[i][j] > 9 || grid[i + 1][j] > 9 || grid[i + 2][j] > 9 || grid[i][j + 1] > 9 || grid[i + 1][j + 1] > 9 || grid[i + 2][j + 1] > 9 || grid[i][j + 2] > 9 || grid[i + 1][j + 2] > 9 || grid[i + 2][j + 2] > 9)
					continue;

				if (grid[i][j] + grid[i][j + 1] + grid[i][j + 2] == 15 && grid[i][j] + grid[i + 1][j] + grid[i + 2][j] == 15 && grid[i + 2][j] + grid[i + 2][j + 1] + grid[i + 2][j + 2] == 15 && grid[i][j + 2] + grid[i + 1][j + 2] + grid[i + 2][j + 2] == 15 && grid[i][j] + grid[i + 1][j + 1] + grid[i + 2][j + 2] == 15 && grid[i + 2][j] + grid[i + 1][j + 1] + grid[i][j + 2] == 15) {
					count++;
				}
			}
		}
		return count;
	}
};