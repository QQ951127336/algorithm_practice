#include<vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
		vector<vector<int>> save;
		for (int i = 0; i < M.size(); i++) {
			vector<int> tmp;
			save.push_back(tmp);
			for (int j = 0; j < M[0].size(); j++) {
				int sum = 0, size = 0;
				for (int x = i - 1; x <= i + 1; x++) {
					for (int y = j - 1; y <= j + 1; y++) {
						if (x >= 0 && x < M.size() && y >= 0 && y < M[0].size()) {
							sum += M[x][y];
							size++;
						}
					}
				}
				save[i].push_back(sum / size);
			}
		}
		return save;
	}
};