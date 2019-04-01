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
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return sortedArray(nums, 0, nums.size() - 1);
	}

	TreeNode* sortedArray(vector<int>& nums, int left, int right) {
		if (right < left)
			return NULL;
		
		int mid = (right - left) / 2 + left;
		TreeNode* node = new TreeNode(nums[mid]);
		node->left = sortedArray(nums, left, mid - 1);
		node->right = sortedArray(nums, mid + 1, right);
		return node;
	}
};