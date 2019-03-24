#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

class Solution {
public:
	string toLowerCase(string str) {
		transform(str.begin(), str.end(), str.begin(), towlower);
		return str;
	}
};