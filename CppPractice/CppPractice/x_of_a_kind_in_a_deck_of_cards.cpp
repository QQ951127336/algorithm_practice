#include<map>
#include<vector>

using namespace std;

class Solution {
public:
	bool hasGroupsSizeX(vector<int>& deck) {
		if (deck.empty())
			return false;
		map<int, int> save;

		for (vector<int>::iterator itr = deck.begin(); itr != deck.end(); itr++) {
			save[*itr] ++;
		}

		if (save.size() == 1) {
			map<int, int>::iterator itr = save.begin();
			if (itr->second == 1)
				return false;
			else
				return true;
		}
		else {
			int aim = -1;
			int min = INT_MAX;
			for (map<int, int>::iterator itr = save.begin(); itr != save.end(); itr++) {
				if (min > itr->second)
					min = itr->second;
			}
			for (map<int, int>::iterator itr = save.begin(); itr != save.end(); itr++) {
				if (judge(itr->second, min))
					return false;

			}
			return true;

		}
	}
	bool judge(int a, int b) {
		if (a <= 1 || b <= 1)
			return true;
		else {
			int t = a % b;
			while (t != 0) {
				a = b;
				b = t;
				t = a % b;
			}
			if (b == 1)
				return true;
			else
				return false;
		}
	}
};