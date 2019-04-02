#include<vector>
#include<map>

using namespace std;

class Solution {
public:
	vector<string> commonChars(vector<string>& A) {
		int demands = A.size();
		map<int, int> keyMap;

		for (int i = 0; i < A.size(); i++) {
			map<char, int> tmpMap;
			for (int j = 0; j < A[i].length(); j++) {
				if (i == 0) {
					if (tmpMap.count(A[i][j])) {
						keyMap[A[i][j] - 'a' + 26 * tmpMap[A[i][j]]] = 1;
						tmpMap[A[i][j]]++;
					}
					else {
						keyMap[A[i][j] - 'a'] = 1;
						tmpMap[A[i][j]] = 1;
					}
				}
				else {
					if (tmpMap.count(A[i][j])) {
						keyMap[A[i][j] - 'a' + 26 * tmpMap[A[i][j]]]++;
						tmpMap[A[i][j]]++;
					}
					else {
						keyMap[A[i][j] - 'a']++;
						tmpMap[A[i][j]] = 1;
					}

				}
			}
		}
		vector<string> answers;
		for (map<int, int>::iterator itr = keyMap.begin(); itr != keyMap.end(); itr++) {
			if (itr->second == A.size()) {
				int key = itr->first;
				if (key >= 26) {
					key = key % 26;
				}
				char answer[10];
				sprintf(answer, "%c", 'a' + key);
				answers.push_back(answer);
			}
		}
		return answers;
	}
}; 