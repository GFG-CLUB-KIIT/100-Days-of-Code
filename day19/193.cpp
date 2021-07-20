// Problem Link :
// https://leetcode.com/problems/minimum-deletion-cost-to-avoid-repeating-letters/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Solution {
public:
  int minCost(string s, vector<int> &cost) {
    ll n = s.size();
    ll delete_c = 0, min_delete = 0;
    for (int i = 0; i < n; i++) {
      if (i + 1 < n) {
        if (s[i] == s[i + 1]) {
          min_delete += min(cost[i], cost[i + 1]);
          cost[i + 1] = max(cost[i], cost[i + 1]); // update
        }
      }
    }
    return min_delete;
  }
};