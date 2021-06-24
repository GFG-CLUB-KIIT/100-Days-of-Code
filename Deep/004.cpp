/*
Problem - https://leetcode.com/problems/search-insert-position/
Author - Abhinav Deep
Date - June 24, 2021
*/

class Solution {
public:
    
    int binarySearch(vector<int>& arr, int low, int high, int key)
    {
        if(low > high){
            return low;
        }
        int mid = low + (high-low)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(key < arr[mid]){
            return binarySearch(arr,low, mid-1,key);
        }
        else{
            return binarySearch(arr,mid+1,high,key);            
        }
        
    }
    
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
        
    }
};