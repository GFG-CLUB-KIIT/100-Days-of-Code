// Problem Link : https://leetcode.com/problems/minimum-path-sum/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int dp[201][201];
  // int costs[101][101];
  int findans(vector<vector<int>> &grid, int i, int j, int m, int n) {
    if (i == m - 1 && j == n - 1) {
      return grid[i][j];
    }
    if (i >= m || j >= n) {
      return INT_MAX;
    }
    if (dp[i][j] != -1) {
      return dp[i][j];
    }

    int temp1 =
        min(findans(grid, i + 1, j, m, n), findans(grid, i, j + 1, m, n));
    return dp[i][j] = temp1 + grid[i][j];
  }
  int minPathSum(vector<vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size();
    memset(dp, -1, sizeof dp);
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         costs[i][j]=-1;
    //     }
    // }
    int result = findans(grid, 0, 0, m, n);
    return result;
  }
};