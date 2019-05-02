#include<iostream>
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	int longestUnivaluePath(TreeNode* root) {
		int max = 0;
		traverse(root, INT_MIN, max);
		return max;
	}

	int traverse(TreeNode* root, int lastValue, int& max) {
		if (root == NULL)
			return 0;
		int left = traverse(root->left, root->val, max);
		int right = traverse(root->right, root->val, max);
		int sum = left + right;
		if (sum > max)
			max = sum;
		int bigger = left > right ? left : right;
		if (root->val == lastValue) {
			return bigger + 1;
		}
		else {
			return 0;
		}
	}
};