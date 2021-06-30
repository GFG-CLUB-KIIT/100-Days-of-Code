// Problem Link : https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string minRemoveToMakeValid(string s) {
    int n = s.size();
    stack<int> st;
    int countl = 0, countr = 0;
    for (int i = 0; i < n; i++) {

      if (s[i] == '(') {
        st.push(i);
      }
      if (s[i] == ')') {
        if (!st.empty()) {
          st.pop();
        } else {
          s[i] = '1';
        }
      }
    }
    // cout << 1;
    // for left out opening parenthesis
    while (!st.empty()) {
      s[st.top()] = '1';
      st.pop();
    }

    s.erase(remove(s.begin(), s.end(), '1'), s.end());
    return s;
  }
};