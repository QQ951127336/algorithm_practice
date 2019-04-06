#include<stdio.h>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
	int numberOfBoomerangs(vector<pair<int, int>>& points) {
		int count = 0;
		int save[1002][1002];
		memset(save, -1, sizeof(save));
		for (int i = 0; i < points.size(); i++) {
			for (int j = 0; j < points.size(); j++) {
				if (i == j)
					continue;
				if (save[j][i] == -1)
					save[i][j] = pow((points[i].first - points[j].first), 2) + pow((points[i].second - points[j].second), 2);
				else
					save[i][j] = save[j][i];
			}
		}

		for (int i = 0; i < points.size(); i++) {
			map<int, int> lengthRecord;
			for (int j = 0; j < points.size(); j++) {
				if (save[i][j] == -1)
					continue;

				//cout << "before length :"<<lengthRecord[save[i][j]] <<" "<< i <<" "<<j<<endl;
				if (!lengthRecord.count(save[i][j])) {
					lengthRecord[save[i][j]] = 1;
				}
				else {
					lengthRecord[save[i][j]]++;
				}
				//cout << "after length :"<<lengthRecord[save[i][j]] <<" "<< i <<" "<<j<<endl;
			}
			for (map<int, int>::iterator itr = lengthRecord.begin(); itr != lengthRecord.end(); itr++) {
				//cout<< itr->first <<" "<<itr->second<<endl;
				if (itr->second > 1) {
					count = count + itr->second*(itr->second - 1);
				}
			}

		}
		return count;
	}
};