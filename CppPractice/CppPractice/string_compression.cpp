#include<vector>

using namespace std;
class Solution {
public:
	int compress(vector<char>& chars) {
		int count = 1, sum = 0;
		int index = 0;
		for (int i = 0; i < chars.size() - 1; i++) {
			if (chars[i] == chars[i + 1]) {
				count++;
			}
			else {
				chars[index++] = chars[i];
				if (count > 1) {
					vector<char> tmp;
					while (count != 0) {
						tmp.push_back(count % 10 + '0');
						count = count / 10;
					}
					for (int i = tmp.size() - 1; i >= 0; i--) {
						chars[index++] = tmp[i];
					}
					count = 1;
				}
			}
		}
		chars[index++] = chars[chars.size() - 1];
		if (count > 1) {
			vector<char> tmp;
			while (count != 0) {
				tmp.push_back(count % 10 + '0');
				count = count / 10;
			}
			for (int i = tmp.size() - 1; i >= 0; i--) {
				chars[index++] = tmp[i];
			}
			count = 1;
		}

		return index;
	}
};