// Problem Link : https://leetcode.com/problems/find-all-anagrams-in-a-string/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> findAnagrams(string s, string p) {
    vector<int> ans;
    int n = s.size(), k = p.size();
    vector<int> freq(26, 0), freq1(26, 0);
    if (n == 0 || k == 0 || k > n) {
      return {};
    }
    for (auto i : p) {
      freq[i - 'a']++;
    }
    for (int i = 0; i < k; i++) {
      freq1[s[i] - 'a']++;
    }
    if (freq == freq1) {
      ans.push_back(0);
    }
    for (int i = 1; i <= n - k; i++) {
      freq1[s[i - 1] - 'a']--;     // remove prev char
      freq1[s[i + k - 1] - 'a']++; // add last char
      if (freq == freq1) {
        ans.push_back(i);
      }
    }
    return ans;
  }
};