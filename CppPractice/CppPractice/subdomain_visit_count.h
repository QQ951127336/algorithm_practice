#include <iostream>
#include <string>
#include<sstream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
	vector<string> subdomainVisits(vector<string>& cpdomains) {
		map<string, int> hostMap;
		for (int i = 0; i < cpdomains.size(); i++) {
			string tmpDomains = cpdomains[i];
			int index = tmpDomains.find_first_of(" ");
			string numStr = tmpDomains.substr(0, index);
			tmpDomains = tmpDomains.substr(index + 1);
			int number;
			stringstream ss(numStr);
			ss >> number;
			vector<string> countStr = splitStr(tmpDomains);
			for (vector<string>::iterator itr = countStr.begin(); itr != countStr.end(); itr++) {
				if (hostMap.count(*itr)) {
					hostMap[*itr] += number;
				}
				else {
					hostMap[*itr] = number;
				}
				printf("hostMap %d %s\n", number, itr->c_str());
			}
		}
		vector<string> results;
		for (map<string, int>::iterator itr = hostMap.begin(); itr != hostMap.end(); itr++) {
			char result[100];
			sprintf(result, "%d %s", itr->second, itr->first.c_str());
			results.push_back(result);
		}
		return results;
	}
	vector<string> splitStr(string tmpDomains) {
		vector<string> result;
		while (true) {
			result.push_back(tmpDomains);
			int index = tmpDomains.find_first_of(".");
			if (index < 0)
				break;
			tmpDomains.erase(0, index + 1);

		}
		return result;
	}
};