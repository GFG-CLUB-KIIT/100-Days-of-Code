// Problem Link :
// https://leetcode.com/problems/eliminate-maximum-number-of-monsters/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int eliminateMaximum(vector<int> &d, vector<int> &s) {
    int n = d.size();
    int n1 = s.size();
    int max_ans = 0;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      if (d[i] % s[i]) {
        ans[i] = (d[i] / s[i]) + 1;
      } else {
        ans[i] = (d[i] / s[i]);
      }
    }
    sort(ans.begin(), ans.end());
    // for(auto i:ans){
    //     cout << i << " ";
    // }
    for (int i = 0; i < n; i++) {
      if (ans[i] > i) {
        max_ans++;
      } else {
        break;
      }
    }

    return max_ans;
  }
};