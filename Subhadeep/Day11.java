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
    List<List<Integer>> ll=new ArrayList<>();
    Map<Integer, List<Integer>> m=new HashMap<>();
    public int height(TreeNode root){
        if(root==null){
            return 0;
        }
        return 1+Math.max(height(root.left), height(root.right));
    }
    public void helper(TreeNode root , int level){
        if(root==null){
            return;
        }
        if(level%2!=0){
         m.get(level).add(root.val);
        }else{
            m.get(level).add(0, root.val);
        }
        helper(root.left ,level+1);
        helper(root.right, level+1);
        
    }
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        int level=1;
        int height=height(root);
        for(int i=1;i<=height;i++){
            m.put(i, new ArrayList<>());
        }
        helper(root, level);
        
        for(List<Integer> al: m.values()){
            ll.add(al);
        }
        return ll;
    }
}