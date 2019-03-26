#include "invert_binary_tree.h"

TreeNode* Solution::invertTree(TreeNode* root) {
	if (root == NULL) {
		return NULL;
	}
	TreeNode* tmp;
	tmp = root->left;
	root->left = root->right;
	root->right = tmp;
	root->left = invertTree(root->left);
	root->right = invertTree(root->right);
	return root;
}