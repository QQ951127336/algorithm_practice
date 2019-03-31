#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
	vector<int> sortArrayByParityII(vector<int>& A) {
		vector<int> _double;
		vector<int> _single;
		for (int i = 0; i < A.size(); i++) {
			if (A[i] % 2 == 0)
				_double.push_back(A[i]);
			else {
				_single.push_back(A[i]);
			}
		}
		string x;
		abs*
		vector<int> result;
		int doubleIndex = 0, singleIndex = 0;
		for (int i = 0; i < A.size(); i++) {
			if (i % 2 == 0) {
				result.push_back(_double[doubleIndex++]);
			}
			else {
				result.push_back(_single[singleIndex++]);
			}
		}
		return result;
	}
};
