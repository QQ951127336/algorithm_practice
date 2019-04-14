#include<map>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
	string longestWord(vector<string>& words) {
		sort(words.begin(), words.end());

		string indexWord = "";
		int length = 0;
		string maxWord = "";
		int max = 0;
		bool canBack = true;
		map<string, int> save;
		for (int i = 0; i < words.size(); i++) {
			if (words[i].length() == 1) {
				save[words[i]] = 1;
				if (max == 0)
					max = 1;
			}
			else {
				if (save.count(words[i].substr(0, words[i].size() - 1))) {
					save[words[i]] = words[i].length();
					if (words[i].length() > max) {
						// cout<<words[i]<<max<<endl;
						max = words[i].length();
					}
				}
			}
		}
		// cout<<max<<endl;
		for (map<string, int>::iterator itr = save.begin(); itr != save.end(); itr++) {
			if (itr->second == max)
				return itr->first;
		}
		return maxWord;
	}
};