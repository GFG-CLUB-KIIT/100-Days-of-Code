// Problem Link : https://leetcode.com/problems/allocate-mailboxes/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int dp[101][101];
  int costs[101][101];
  int findans(vector<int> &houses, int n, int k, int index) {
    // int costs[n][n];
    if (k == 0 && index == n) {
      return 0;
    }
    if (k == 0 || index == n) {
      return INT_MAX;
    }

    if (dp[k][index] != -1) {
      return dp[k][index];
    }
    int ans = INT_MAX; // min
    for (int j = index; j < n; j++) {
      int temp = findans(houses, n, k - 1, j + 1);
      if (temp != INT_MAX) {
        ans = min(ans, costs[index][j] + temp);
      }
    }
    return dp[k][index] = ans;
  }
  int minDistance(vector<int> &houses, int k) {
    int n = houses.size();
    sort(houses.begin(), houses.end());
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        for (int left = i; left <= j; left++)
          costs[i][j] +=
              abs(houses[(i + j) / 2] - houses[left]); // allocating median
    int result = findans(houses, n, k, 0);
    return result;
  }
};