// Problem Link : https://leetcode.com/problems/stone-game-vi/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int stoneGameVI(vector<int> &aliceValues, vector<int> &bobValues) {
    int n = aliceValues.size();
    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
      v.push_back(
          {aliceValues[i] + bobValues[i], aliceValues[i], bobValues[i]});
    }
    sort(v.begin(), v.end(), greater<vector<int>>());
    int temp1 = 0, temp2 = 0;
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        temp1 += v[i][1];
      } else {
        temp2 += v[i][2];
      }
    }
    // cout << temp1 << " " << temp2;
    if (temp1 > temp2) {
      return 1;
    } else if (temp1 < temp2) {
      return -1;
    } else {
      return 0;
    }
  }
};