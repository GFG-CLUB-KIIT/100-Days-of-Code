// Problem Link : https://leetcode.com/problems/reverse-string-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string reverseStr(string s, int k) {
    int n = s.size();
    string t = s;
    for (int i = 0; i < n; i += 2 * k) {
      reverse(s.begin() + i, min(s.begin() + i + k, s.end()));
    }
    return s;
  }
};