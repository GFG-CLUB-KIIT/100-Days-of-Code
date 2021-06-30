Link : https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        vector<int> res(n);
        int k=n-1;
        while(l<=r)
        {
            if(abs(nums[l])<abs(nums[r]))
            {
                res[k--]=nums[r]*nums[r];
                r--;
            }
            else
            {
                res[k--]=nums[l]*nums[l];
                l++;
            }
        }
        return res;
    }
};
