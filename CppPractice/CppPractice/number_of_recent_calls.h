#include<vector>

using namespace std;

class RecentCounter {
public:
	vector<int> pingRecord;
	int delIndex;
	RecentCounter() {
		delIndex = 0;
	}

	int ping(int t) {
		pingRecord.push_back(t);
		for (int i = delIndex; i < pingRecord.size(); i++) {
			if (pingRecord[i] >= t - 3000) {
				delIndex = i;

				break;
			}
		}
		return pingRecord.size() - delIndex;
	}
};