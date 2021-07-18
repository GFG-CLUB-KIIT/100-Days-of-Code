// Problem Link : https://leetcode.com/problems/candy/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  // int dp[20005];
  int candy(vector<int> &ratings) {
    int n = ratings.size();
    int res = 0;
    // memset(dp,0,sizeof dp);
    // dp[0]=1;
    vector<int> left(n, 1), right(n, 1);
    for (int i = 1; i < n; i++) {
      if (ratings[i] > ratings[i - 1]) {
        left[i] = left[i - 1] + 1;
      }
    }
    for (int i = n - 2; i >= 0; i--) {
      if (ratings[i] > ratings[i + 1]) {
        right[i] = right[i + 1] + 1;
      }
    }
    for (int i = 0; i < n; i++) {
      res += max(left[i], right[i]);
    }
    return res;
  }
};