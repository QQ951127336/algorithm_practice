#include<vector>
#include<cmath>

using namespace std;

class Solution {
public:
	int maxDistToClosest(vector<int>& seats) {
		int max = INT_MIN;
		vector<int> left(seats.size(), -1);
		vector<int> right(seats.size(), -1);
		left[0] = INT_MAX / 2;
		right[seats.size() - 1] = INT_MAX / 2;

		for (int i = 1; i < seats.size(); i++) {
			if (seats[i] == 1) {
				continue;
			}
			else {

				if (seats[i - 1] == 1) {
					left[i] = 1;
				}
				else {
					left[i] = left[i - 1] + 1;
				}

			}
		}
		for (int j = seats.size() - 2; j >= 0; j--) {

			if (seats[j] == 1) {
				continue;
			}
			else {

				if (seats[j + 1] == 1) {
					right[j] = 1;
				}
				else {
					right[j] = right[j + 1] + 1;
				}
			}
		}
		// cout<<left[0] << right[0]<<endl;
		int answer = INT_MIN;
		for (int i = 0; i < seats.size(); i++) {
			int tmp = left[i] < right[i] ? left[i] : right[i];
			if (answer < tmp)
				answer = tmp;
		}
		return answer;
	}
};