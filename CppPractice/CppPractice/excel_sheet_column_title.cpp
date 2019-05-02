#include<string>

using namespace std;

class Solution {
public:
	string convertToTitle(int n) {
		string answer = "";
		while (n != 0) {
			int tmp = n % 26;
			if (tmp == 0) {
				tmp = 26;
			}
			answer = (char)(tmp - 1 + 'A') + answer;
			n = n / 26;
			if (tmp == 26)
				n = n - 1;
		}
		return answer;
	}
};