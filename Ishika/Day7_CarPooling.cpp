// Problem Link: https://leetcode.com/problems/car-pooling/


class Solution {
public:    
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>dp(1001, 0);
        int max_ = 0;
        for(int i=0; i<trips.size(); i++){
            dp[trips[i][1]] += trips[i][0];
            dp[trips[i][2]] -= trips[i][0];
            max_ = max(max_, trips[i][2]);
        }
        for(int i=1; i<=max_; i++){
            dp[i]+=dp[i-1];
            if(dp[i]>capacity){
                return false;
            }
        }
        return true; 
    }
};