package leetcode;

public class InvertBinaryTree {
    static class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int val){
            this.val = val;
        }
    }
    static class Solution {
        public TreeNode invertTree(TreeNode root) {
            if(root == null)
                return root;
            TreeNode tmpRoot = root.left;
            root.left = root.right;
            root.right = tmpRoot;
            root.left = invertTree(root.left);
            root.right = invertTree(root.right);
            return root;
        }
    }
}
