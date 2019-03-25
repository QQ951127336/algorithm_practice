package leetcode;

public class Merge_two_binary_trees {
     public class TreeNode {
         int val;
         TreeNode left;
         TreeNode right;
         TreeNode(int x) { val = x; }
    }
    class Solution {
        public TreeNode mergeTrees(TreeNode t1, TreeNode t2) {
            TreeNode newTreeNode,t1Left = null,t2Left = null, t1Right = null, t2Right = null;
            if (t1 == null) {
                newTreeNode = t2;
            } else if (t2 == null) {
                newTreeNode = t1;
            } else{
                newTreeNode = new TreeNode(t1.val + t2.val);
            }
            if (t1 != null) {
                t1Left = t1.left;
                t1Right = t1.right;
            }
            if (t2 != null) {
                t2Left = t2.left;
                t2Right = t2.right;
            }

            if (newTreeNode != null) {
                newTreeNode.left = mergeTrees(t1Left, t2Left);
                newTreeNode.right = mergeTrees(t1Right, t2Right);
            }
            return newTreeNode;
        }
    }
}
