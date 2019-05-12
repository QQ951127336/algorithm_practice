#include<vector>

using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	int sumRootToLeaf(TreeNode* root) {
		vector<int> save;
		traverse(root, 0, save);
		int sum = 0;
		for (vector<int>::iterator itr = save.begin(); itr != save.end(); itr++) {
			sum += *itr;
		}
		return sum;
	}
	void traverse(TreeNode* root, int sum, vector<int>& save) {
		if (root == NULL) {
			return;
		}
		sum = sum * 2 + root->val;
		if (root->left == NULL && root->right == NULL) {
			save.push_back(sum);
		}
		else {
			traverse(root->left, sum, save);
			traverse(root->right, sum, save);
		}
	}
};