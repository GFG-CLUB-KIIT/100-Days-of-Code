// https://leetcode.com/problems/partition-equal-subset-sum/

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int s=0;
        for(int i=0; i<n; i++)
        {
            s += nums[i];
        }

        if(s%2!=0)
        {
            return false;
        }

        s = s/2;

        bool dp[n+1][s+1];

        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<s+1; j++)
            {
                if(i==0 && j==0)
                {
                    dp[i][j] = true;
                }
                else if(i==0)
                {
                    dp[i][j] = false;
                }
                else if(j==0)
                {
                    dp[i][j] = true;
                }
                else if(nums[i-1]<=j)
                {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        return dp[n][s];
    }
};
