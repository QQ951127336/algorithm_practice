#include<map>
#include<algorithm>

using namespace std;

class Solution {
public:
	bool judgeSquareSum(int c) {
		int      start = (int)sqrt(c);
		int left = 0;
		map<int, bool> save;
		while (start >= 0) {
			if (save.count(start))
				break;
			left = (int)(sqrt(c - start * start));
			cout << start << " " << left << endl;
			if ((left*left + start * start) == c)
				return true;
			save[start] = true;
			save[left] = true;
			--start;
		}
		return false;
	}
	bool judge(int a) {
		int tmp = (int)(sqrt(a));
		if (tmp*tmp == a)
			return true;
		else
			return false;
	}
};