// https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/

class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        
        // minimum insertion is equal to n - lcs
        
        string t = s;
        reverse(s.begin(), s.end());
        
        int dp[n+1][n+1], ma=INT_MIN;
        memset(dp,0,sizeof(dp));
        
        for(int i=n; i>=0; i--)
        {
            for(int j=n; j>=0; j--)
            {
                if(i==n || j==n)
                {
                    dp[i][j] = 0;
                }
                else if(s[i] == t[j])
                {
                    dp[i][j] = dp[i+1][j+1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
                }
                
                if(ma<dp[i][j])
                {
                    ma = max(ma,dp[i][j]);
                }
            }
        }
        
        return n - ma;
    }
};