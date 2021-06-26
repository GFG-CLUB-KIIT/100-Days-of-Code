/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int sum=0;
    public int height(TreeNode root){
        if(root==null){
            return 0;
        }
        return 1+Math.max(height(root.left), height(root.right));
    }
    public void helper(TreeNode root, int level, int height){
        if(root==null){
            return;
        }
        if(root.left==null && root.right==null && level==height){
            sum+=root.val;
            return;
        }
        
        helper(root.left ,level+1, height);
        helper(root.right ,level+1, height);
    }
    public int deepestLeavesSum(TreeNode root) {
        int height=height(root);
        helper(root, 1, height);
        return sum;
    }
}