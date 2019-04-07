#include<vector>

using namespace std;

class Solution {
public:
	vector<string> letterCasePermutation(string S) {
		vector<string> save;
		deal("", S, 0, S.size(), save);
		return save;
	}

	void deal(string newS, string S, int index, int size, vector<string>& save) {
		if (index == size) {
			save.push_back(newS);
			return;
		}
		if (S[index] >= 'a' && S[index] <= 'z') {
			deal(newS + S[index], S, index + 1, size, save);
			S[index] = S[index] - 'a' + 'A';
			deal(newS + S[index], S, index + 1, size, save);
		}
		else if (S[index] >= 'A' &&S[index] <= 'Z') {
			deal(newS + S[index], S, index + 1, size, save);
			S[index] = S[index] + 'a' - 'A';
			deal(newS + S[index], S, index + 1, size, save);
		}
		else {
			deal(newS + S[index], S, index + 1, size, save);
		}
	}
};