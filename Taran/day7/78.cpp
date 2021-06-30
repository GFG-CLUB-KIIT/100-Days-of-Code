// Problem Link : https://leetcode.com/problems/product-of-array-except-self/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int n = nums.size();
    // vector<int>ans;
    int prefix_left[n + 1], prefix_right[n + 1];
    prefix_left[0] = 1, prefix_right[n - 1] = 1;
    for (int i = 1; i < n; i++) {
      prefix_left[i] = prefix_left[i - 1] * nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--) {
      prefix_right[i] = prefix_right[i + 1] * nums[i + 1];
    }
    // 24 6 2 1
    for (int i = 0; i < n; i++) {
      nums[i] = prefix_left[i] * prefix_right[i];
    }
    return nums;
  }
};