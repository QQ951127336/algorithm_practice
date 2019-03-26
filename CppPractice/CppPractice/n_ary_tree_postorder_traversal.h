#pragma once
#include<vector>

using namespace std;

class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};
class Solution {
public:
	vector<int> postorder(Node* root) {

		vector<int> result;
		if (root == NULL)
			return result;
		for (int i = 0; i < root->children.size(); i++) {
			vector<int> tmp = postorder(root->children[i]);

			result.insert(result.end(), tmp.begin(), tmp.end());

		}
		result.push_back(root->val);
		return result;
	}
};