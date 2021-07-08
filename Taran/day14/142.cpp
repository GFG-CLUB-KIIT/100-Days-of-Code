// Problem Link : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool flag = false;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] > target) {
                high = mid-1;
            }
            else if(nums[mid] < target) {
                low = mid+1;     
            }
            else{
                return true;
            }
          }
        return false;
    }
};