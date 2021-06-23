Link : https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curr_max=nums[0];
        int curr_min=nums[0];
        int prev_max=nums[0];
        int prev_min=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            curr_max=max({prev_max*nums[i],prev_min*nums[i],nums[i]});
            curr_min=min({prev_max*nums[i],prev_min*nums[i],nums[i]});
            ans=max(ans,curr_max);
            prev_max=curr_max;
            prev_min=curr_min;
        }
        return ans;
    }
};
