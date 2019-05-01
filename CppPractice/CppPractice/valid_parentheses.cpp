#include<stack>
#include<string>
#include<map>

using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> save;
		map<char, char> key;
		key[')'] = '(';
		key[']'] = '[';
		key['}'] = '{';

		for (char aim : s) {
			if (save.empty()) {
				if (aim == ')' || aim == ']' || aim == '}')
					return false;
				save.push(aim);
			}
			else {
				if (aim == ')' || aim == ']' || aim == '}') {
					if (key[aim] == save.top()) {
						save.pop();
					}
					else {
						return false;
					}
				}
				else {
					save.push(aim);
				}
			}
		}
		if (save.empty())
			return true;
		return false;
	}
};