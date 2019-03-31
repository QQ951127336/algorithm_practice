package leetcode;

import java.util.LinkedList;
import java.util.Queue;

public class ConvertSortedArrayToBinarySearchTree {
    public class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode(int x) { val = x; }
  }

    class Solution {
        public TreeNode sortedArrayToBST(int[] nums) {
            Queue<TreeNode> queue = new LinkedList();
            TreeNode rootNode = null;
            queue.offer(rootNode);
            return null;
        }
    }
}
