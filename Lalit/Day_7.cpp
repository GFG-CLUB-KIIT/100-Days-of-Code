// https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        
        string tempp = "";
        
        for(int g=0; g<n; g++)
        {
            for(int i=0, j=g; j<n; j++,i++)
            {
                if(g==0)
                {
                    dp[i][j] = 1;
                }
                else if(g==1)
                {
                    if(s[i]==s[j])
                    {
                        dp[i][j] = 1;
                    }
                    else
                    {
                        dp[i][j] = 0;
                    }
                }
                else
                {
                    if(s[i]==s[j])
                    {
                        dp[i][j] = dp[i+1][j-1];
                    }
                }
                
                if(dp[i][j]==1)
                {
                    string temp = "";
                    temp += s.substr(i,j-i+1);
                    tempp = temp;
                }
            }
        }
        
        return tempp;
    }
};