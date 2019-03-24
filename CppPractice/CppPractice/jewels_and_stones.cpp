#include <string>
#include <map>
#include "jewels_and_stones.h"
using namespace std;

int Solution::numJewelsInStones(string J, string S) {
	map<char, bool> jewel;
	int jLength = J.length();
	int sLength = S.length();
	char tmpChar = NULL;
	for (int index = 0; index < jLength; index++) {
		tmpChar = J[index];
		if (jewel.find(tmpChar) == jewel.end())
			jewel[tmpChar] = true;
	}
	int count = 0;
	for (int index = 0; index < sLength; index++) {
		tmpChar = S[index];
		if (jewel.find(tmpChar) != jewel.end()) {
			count++;
		}
	}
	return count;
}