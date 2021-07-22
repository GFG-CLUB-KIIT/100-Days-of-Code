// Question Link: https://leetcode.com/problems/find-peak-element/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
       int start= 0; int end =  n-1;
        while(start<end)
        {
            int mid = (start+end)/2;
            if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1])
            {
                return mid;
            }
            else if (nums[mid]< nums[mid-1])
            {
                start = nim
            }
        }
    }
};
