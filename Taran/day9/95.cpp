// Problem Link : https: // leetcode.com/problems/minimum-elements-to-add-to-form-a-given-sum/
#include <bits/stdc++.h>
      using namespace std;
class Solution {
public:
  int minElements(vector<int> &nums, int limit, int goal) {
    int n = nums.size();
    long sum = 0;
    for (int i = 0; i < n; i++) {
      sum += nums[i];
    }
    long left = abs(goal - sum);
    cout << left;
    cout << sum << endl;
    return (left + limit - 1) / (limit);
  }
};
