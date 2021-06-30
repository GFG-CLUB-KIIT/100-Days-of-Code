// Problem Link : https://leetcode.com/problems/largest-submatrix-with-rearrangements/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int count=0;
        int m= matrix[0].size();
        vector<int>ans(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    ans[j]++; //increament
                }
                else
                {
                    ans[j]=0;
                }
            }
            vector<int>res=ans;
            sort(res.begin(),res.end());
            for(int i=0;i<m;i++){
                count=max(count,res[i]*(m-i));
            }
        }
        return count;
    }
};