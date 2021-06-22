// Question Link: https://leetcode.com/problems/increasing-triplet-subsequence/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        if(nums.size()<3){return false;}
        
        int j = INT_MAX;
        int i = INT_MAX;
        
        for(int p=0;p<nums.size();p++)
        {
            if(nums[p]<=i){i=nums[p];}
            else if(nums[p]<=j){j=nums[p];}
            else{return true;}
        }
        return false;
    }
    
};