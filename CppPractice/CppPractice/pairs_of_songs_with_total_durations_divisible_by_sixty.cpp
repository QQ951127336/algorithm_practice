#include<map>
#include<vector>

using namespace std;

class Solution {
public:
	int numPairsDivisibleBy60(vector<int>& time) {
		int count = 0;
		map<int, int> save;
		for (int i = 0; i < time.size(); i++) {
			save[time[i] % 60]++;
		}
		for (map<int, int>::iterator itr = save.begin(); itr != save.end(); itr++) {
			if (save.count((60 - (itr->first)) % 60)) {
				if ((60 - (itr->first)) % 60 != itr->first)
					count += itr->second * save[(60 - (itr->first)) % 60];
				else
					count += itr->second * (save[(60 - (itr->first)) % 60] - 1);
			}
		}
		count /= 2;
		return count;
	}
};