#include<algorithm>
#include<cctype>
#include<string>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
	string mostCommonWord(string paragraph, vector<string>& banned) {
		transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
		string tmpSave = "";
		map<string, bool> key;
		for (string aim : banned) {
			key[aim] = true;
		}
		map<string, int> save;
		for (int i = 0; i < paragraph.length(); i++) {
			if (isalpha(paragraph[i])) {
				tmpSave.push_back(paragraph[i]);
			}
			else {
				if (tmpSave.length() > 0 && !key.count(tmpSave)) {
					save[tmpSave]++;
				}
				tmpSave = "";
			}
		}
		if (tmpSave.length() > 0 && !key.count(tmpSave)) {
			save[tmpSave]++;
		}
		string answer = "";
		int max = 0;
		for (map<string, int>::iterator itr = save.begin(); itr != save.end(); itr++) {
			if (itr->second > max) {
				max = itr->second;
				answer = itr->first;
			}
		}
		return answer;

	}
};