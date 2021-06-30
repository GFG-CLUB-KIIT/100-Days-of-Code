// Problem Link : https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int mod = 1e9 + 7;
  int dp[5005][4][4][4];
  int findans(int index, int n, int a, int b, int c) {
    if (index == n) {
      return 1;
    }
    if (dp[index][a][b][c] != -1) {
      return dp[index][a][b][c];
    }
    int res = 0;
    for (int i = 1; i <= 3; i++) {
      if (i == a) {
        continue;
      }
      for (int j = 1; j <= 3; j++) {
        if (j == i || j == b) {
          continue;
        }
        for (int k = 1; k <= 3; k++) {
          if (k == j || k == c) {
            continue;
          }
          res += (findans(index + 1, n, i, j, k));
          res %= mod;
        }
      }
    }
    dp[index][a][b][c] = res;
    return res;
  }
  int numOfWays(int n) {
    int res = 0;
    memset(dp, -1, sizeof dp);
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         for(int k=0;k<4;k++){
    //         }
    //     }
    // }
    res += findans(0, n, 0, 0, 0);
    return res;
  }
};