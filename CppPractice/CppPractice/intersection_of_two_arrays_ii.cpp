#include<vector>
#include<map>
using namespace std;
class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		map<int, int> m1, m2;
		for (int i = 0; i < nums1.size(); i++) {
			if (m1.count(nums1[i])) {
				m1[nums1[i]]++;
			}
			else {
				m1[nums1[i]] = 1;
			}
		}
		for (int i = 0; i < nums2.size(); i++) {
			if (m2.count(nums2[i])) {
				m2[nums2[i]]++;
			}
			else {
				m2[nums2[i]] = 1;
			}
		}
		vector<int> answer;
		for (map<int, int>::iterator itr = m1.begin(); itr != m1.end(); itr++) {
			if (m2.count(itr->first)) {
				for (int i = 0; i < itr->second && i < m2[itr->first]; i++)
					answer.push_back(itr->first);
			}
		}
		return answer;

	}
};