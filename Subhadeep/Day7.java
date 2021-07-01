class Solution {
    TreeNode target;
    TreeNode ans;
    public void helper(TreeNode o,TreeNode c){
        if(o==null){
            return;
        }
        if(o==target){
            ans=c;
            return;
        }
        helper(o.left, c.left);
        helper(o.right, c.right);
        
    }
    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
        
        this.target=target;
        helper(original, cloned);
        return ans;
    }
}