#include<stdio.h>

using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:

	int findSecondMinimumValue(TreeNode* root) {
		if (root == NULL)
			return -1;
		if (root->left == NULL)
			return -1;
		int left, right;
		if (root->val != root->left->val)
			left = root->left->val;
		else
			left = findSecondMinimumValue(root->left);
		if (root->val != root->right->val)
			right = root->right->val;
		else
			right = findSecondMinimumValue(root->right);
		if (left == -1)
			return right;
		else if (right == -1)
			return left;
		else {
			return right < left ? right : left;
		}
	}
};