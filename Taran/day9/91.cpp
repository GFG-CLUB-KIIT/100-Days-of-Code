// Problem Link :  https://leetcode.com/problems/word-break/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  map<string, bool> dp;
  bool findans(vector<string> &w, string s, int n) {
    if (find(w.begin(), w.end(), s) != w.end()) {
      return true;
    }
    if (dp.find(s) != dp.end()) {
      return dp[s];
    }
    for (int i = 1; i <= n; i++) {

      // find portion
      auto it = (find(w.begin(), w.end(), s.substr(0, i)) != w.end());
      // cout << it << "\n";
      // remaining portion
      if (it && findans(w, s.substr(i), n)) {
        return dp[s] = true;
      }
    }
    return dp[s] = false;
  }

  bool wordBreak(string s, vector<string> &wordDict) {
    int n = s.size();
    return findans(wordDict, s, n);
  }
};