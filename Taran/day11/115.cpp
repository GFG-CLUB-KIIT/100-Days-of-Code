// Problem Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
#include <bits/stdc++.h>
    using namespace std;
class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int n = nums.size();
    map<int, int> m;
    for (int i = 0; i < n; i++) {
      m[nums[i]]++;
    }
    int j = 0;
    for (auto i : m) {
      if (i.second < 2) {
        nums[j++] = i.first;
      }
      if (i.second >= 2) {
        int t = 2;
        while (t--) {
          nums[j++] = i.first;
        }
      }
    }
    return j;
  }
};