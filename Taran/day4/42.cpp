// Problem Link :
// https://leetcode.com/problems/maximum-alternating-subsequence-sum/submissions/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Solution {
public:
  // ll modd=1000005;
  ll dp[100005][2];
  ll solve(vector<int> &v, int n, int index, bool vis) {
    if (index == n) {
      return 0;
    }
    if (dp[index][vis] != -1) {
      return dp[index][vis];
    }
    if (vis) {
      return dp[index][vis] = max(v[index] + solve(v, n, index + 1, false),
                                  solve(v, n, index + 1, vis));
    }
    ll ans = max(solve(v, n, index + 1, true) - v[index],
                 solve(v, n, index + 1, vis));
    return dp[index][vis] = ans;
  }
  long long maxAlternatingSum(vector<int> &nums) {
    int n = nums.size();
    memset(dp, -1, sizeof dp);
    ll result = solve(nums, n, 0, true);
    return result;
  }
};