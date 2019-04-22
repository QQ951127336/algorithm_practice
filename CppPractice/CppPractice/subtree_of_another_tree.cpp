#include<iostream>

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	bool isSubtree(TreeNode* s, TreeNode* t) {
		if (t == NULL)
			return true;

		return traverse(s, t);
	}
	bool traverse(TreeNode* s, TreeNode* t) {
		if (s == NULL)
			return false;
		else if (s->val == t->val && judge(s, t)) {

			return true;
		}
		else {
			return traverse(s->left, t) || traverse(s->right, t);
		}
	}

	bool judge(TreeNode* s, TreeNode* t) {
		if (s == NULL && t == NULL)
			return true;
		else if (s != NULL && t != NULL) {
			return s->val == t->val && judge(s->left, t->left) && judge(s->right, t->right);
		}
		else
			return false;
	}
};