#include<vector>
#include<iostream>
#include<map>
#include<map>

using namespace std;
//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
	vector<int> findMode(TreeNode* root) {
		map<int, int> save;
		traverse(root, save);
		int max = 0;
		vector<int> answer;
		for (map<int, int>::iterator itr = save.begin(); itr != save.end(); itr++) {
			if (max < itr->second) {
				max = itr->second;
			}
		}
		for (map<int, int>::iterator itr = save.begin(); itr != save.end(); itr++) {
			if (max == itr->second) {
				answer.push_back(itr->first);
			}
		}
		return answer;

	}

	void traverse(TreeNode* root, map<int, int>& save) {
		if (root == NULL)
			return;
		if (save.count(root->val)) {
			save[root->val]++;
		}
		else {
			save[root->val] = 1;
		}
		traverse(root->left, save);
		traverse(root->right, save);
	}
};