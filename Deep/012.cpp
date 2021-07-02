/*
Problem - https://leetcode.com/problems/missing-number/
Author - Abhinav Deep
Date - July 2, 2021
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int x = 0;
        for(int i=0;i<=nums.size();i++){
            x = x^i;
        }
        for(int i=0;i<nums.size();i++){
            x = x^nums[i];
        }
        return x;
    }
};
