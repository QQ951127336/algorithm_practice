#include<map>

using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };




struct Node {
	int parent;
	int deep;
};
class Solution {
public:
	bool isCousins(TreeNode* root, int x, int y) {
		map<int, Node> save;
		traverse(root, 0, -1, save);
		if (!save.count(x) || !save.count(y)) {
			return false;
		}
		if (save[x].deep == save[y].deep && save[x].parent != save[y].parent)
			return true;
		return false;
	}
	void traverse(TreeNode* root, int deep, int parent, map<int, Node>& save) {
		if (root == NULL)
			return;
		Node node;
		node.deep = deep;
		node.parent = parent;
		save[root->val] = node;
		traverse(root->left, deep + 1, root->val, save);

		traverse(root->right, deep + 1, root->val, save);
	}
};