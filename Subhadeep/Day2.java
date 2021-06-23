class Solution {
    public void rightView(TreeNode root, int level, List<Integer> al){
        if(root==null){
            return;
        }
        
        if(level>al.size()){
            al.add(root.val);
        }
        rightView(root.right ,level+1, al);
        rightView(root.left, level+1, al);
    }
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> al=new ArrayList<>();
        rightView(root, 1 ,al);
        return al;
    }
}