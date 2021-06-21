// Question Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/


class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int local_max = INT_MIN;
        sort(nums.begin(), nums.end());
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        // for(int i=1; i<nums.size(); i++)
        // {
        //     int j = i-1;
        //     int temp = (nums[i]-1)*(nums[j]-1);
        //     local_max = max(temp, local_max);
        // }
        //return local_max;
    }
};
