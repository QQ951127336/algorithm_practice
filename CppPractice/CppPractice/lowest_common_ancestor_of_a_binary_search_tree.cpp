#include <iostream>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == NULL)
			return NULL;

		if (root->val == p->val || root->val == q->val)
			return root;

		if (root->left == NULL && root->right == NULL) {
			return NULL;
		}
		TreeNode* result = NULL;
		if (root->left == NULL) {
			result = lowestCommonAncestor(root->right, p, q);
		}
		else if (root->right == NULL) {
			result = lowestCommonAncestor(root->left, p, q);
		}
		else {
			TreeNode* left = lowestCommonAncestor(root->left, p, q);
			TreeNode* right = lowestCommonAncestor(root->right, p, q);
			if (left != NULL && right != NULL)
				result = root;
			else if (left != NULL) {
				result = left;
			}
			else {
				result = right;
			}
		}
		return result;
	}
};