#include<string>
#include<map>
using namespace std;
class Solution {
public:
	int firstUniqChar(string s) {
		map<char, int> saveCount;
		map<char, int> saveIndex;
		for (int i = 0; i < s.length(); i++) {
			if (!saveIndex.count(s[i])) {
				saveIndex[s[i]] = i;
			}
			saveCount[s[i]] ++;
		}
		int answer = -1;
		for (map<char, int>::iterator itr = saveCount.begin(); itr != saveCount.end(); itr++) {
			if (itr->second == 1 && (answer == -1 || answer > saveIndex[itr->first])) {
				answer = saveIndex[itr->first];
			}
		}
		return answer;
	}
};