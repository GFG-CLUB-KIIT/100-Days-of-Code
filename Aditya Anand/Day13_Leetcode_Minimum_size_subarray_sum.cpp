// * Question Link -> https://leetcode.com/problems/minimum-size-subarray-sum/


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // valid subarray -> sum >= k -> release -> logic
        // invalid subarray -> sum < k -> acquire 
        int sum = 0, _min = INT_MAX;
        for(int i = 0, j = -1; i < (int) nums.size(); i++){
            // invalid subarrays
            sum += nums[i];
            while(sum >= target){
             // valid subarrays
                _min = min(_min, i - j);
                j++;
                sum -= nums[j];
            }
        }
        return _min != INT_MAX ? _min : 0;
    }
};