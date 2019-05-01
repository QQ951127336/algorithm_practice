#include<cstdio>
#include<queue>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Node {
public:
	TreeNode* treeNode;
	int deep;
	Node(TreeNode* inRoot, int inDeep) {
		treeNode = inRoot;
		deep = inDeep;
	}
};
class Solution {
public:
	int minDepth(TreeNode* root) {
		queue<Node*> save;
		if (root == NULL) {
			return 0;
		}
		save.push(new Node(root, 1));
		while (!save.empty()) {
			Node* node = save.front();
			save.pop();
			if (node->treeNode == NULL)
				continue;
			if (node->treeNode->left == NULL && node->treeNode->right == NULL)
				return node->deep;
			save.push(new Node(node->treeNode->left, node->deep + 1));
			save.push(new Node(node->treeNode->right, node->deep + 1));
		}
		return -1;
	}
};