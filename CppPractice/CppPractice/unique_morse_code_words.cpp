#pragma once
#include "unique_morse_code_words.h"

int Solution::uniqueMorseRepresentations(vector<string>& words) {
	const string morseMap[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
	map<string, bool> resultMap;
	for (int i = 0; i < words.size(); i++) {
		string line = "";
		for (int j = 0; j < words[i].size(); j++) {
			line = line + morseMap[words[i][j] - 'a'];
		}
		resultMap[line] = true;
	}
	return resultMap.size();
}