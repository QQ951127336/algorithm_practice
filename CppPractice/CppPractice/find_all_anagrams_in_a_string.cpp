#include<vector>

using namespace std;
class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		vector<int>answer;
		if (p.length() > s.length())
			return answer;
		vector<int>sSave(26, 0), pSave(26, 0);
		for (int i = 0; i < p.length(); i++) {
			pSave[p[i] - 'a']++;
			sSave[s[i] - 'a']++;
		}
		int index = 0;
		if (pSave == sSave)
			answer.push_back(index);
		for (index = 1; index < (int)s.length() - (int)p.length() + 1; index++) {
			sSave[s[index - 1] - 'a']--;
			sSave[s[index + p.length() - 1] - 'a']++;
			if (pSave == sSave)
				answer.push_back(index);
		}
		return answer;
	}
};