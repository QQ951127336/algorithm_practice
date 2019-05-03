#include<queue>
#include<map>

using namespace std;

class Solution {
public:
	struct cmp {
		bool operator()(int a, int b) {
			return a > b;
		}
	};
	int thirdMax(vector<int>& nums) {
		map<int, bool> saved;
		priority_queue<int, vector<int>, cmp> priority;
		for (int i = 0; i < nums.size(); i++) {
			if (saved.count(nums[i])) {
				continue;
			}
			else {
				saved[nums[i]] = true;
				priority.push(nums[i]);
				if (priority.size() > 3) {
					priority.pop();
				}
			}
		}
		int answer = 0;
		if (priority.size() < 3) {
			while (!priority.empty()) {
				answer = priority.top();
				priority.pop();
			}
		}
		else {
			answer = priority.top();
		}
		return answer;
	}

};