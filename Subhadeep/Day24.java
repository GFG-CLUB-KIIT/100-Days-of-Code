//Container with most water
class Solution {
    public int maxArea(int[] height) {
        
        int final_ans=Integer.MIN_VALUE;
        int i=0;
        int j=height.length-1;
        int ans=0;
        while(i<j){
            ans=Math.min(height[i], height[j])*(j-i);
            if(height[j]>height[i]){
                i++;
            }else{
                j--;
            }
            final_ans=Math.max(ans ,final_ans);
        }
        return final_ans;
    }
}