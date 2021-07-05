// Problem Link : https://leetcode.com/problems/target-sum/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int dp[23][2005];
  int findans(vector<int> &nums, int n, int index, int targetSum, int S) {
    int count = 0;
    if (index > n) {
      return 0;
    }
    if (index == n) {
      if (targetSum == S) {
        return 1;
      } else {
        return 0;
      }
    }
    if (dp[index][targetSum + 1005] != -1) {
      return dp[index][targetSum + 1005];
    }
    count += findans(nums, n, index + 1, targetSum - nums[index], S);
    count += findans(nums, n, index + 1, targetSum + nums[index], S);
    return dp[index][targetSum + 1005] = count;
  }
  int findTargetSumWays(vector<int> &nums, int S) {
    int n = nums.size();
    memset(dp, -1, sizeof dp);
    int result = findans(nums, n, 0, 0, S);
    return result;
  }
};