// Question Link: https://leetcode.com/problems/longest-common-subsequence/
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int arr[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                {
                    arr[i][j]=0;
                }
                else if(text1[i-1]==text2[j-1])
                {
                    arr[i][j]= 1+arr[i-1][j-1];
                }
                else
                {
                    arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
                }
            }
        }
        return arr[m][n];
    }
};
