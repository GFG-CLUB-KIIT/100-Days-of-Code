// Problem  Link :
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int countPalindromicSubsequence(string s) {
    bool vis[26];
    memset(vis, false, sizeof vis);
    int n = s.size();
    int count = 0;
    int shift = 0;
    map<char, int> m;
    // count=0;
    for (int i = 0; i < n; i++) {
      // count=0;
      if (!vis[s[i] - 'a']) {
        vis[s[i] - 'a'] = true;
        int shift = n - 1;
        while (shift >= i + 2 && s[shift] != s[i]) {
          shift--;
        }
        unordered_set<char> st;
        if (s[i] == s[shift]) {
          for (int p = i + 1; p < shift; ++p) {
            st.insert(s[p]);
          }
          count += st.size();
        }
      }
    }
    return count;
  }
};