// Problem Link : https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int countGoodRectangles(vector<vector<int>> &rectangles) {
    int max = 0;
    int cur_max = 0;
    set<int> s;
    int n = rectangles.size();
    int m = rectangles[0].size();
    int temp;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++)
        temp = min(rectangles[i][0], rectangles[i][1]);
      if (temp > cur_max) {
        cur_max = temp;
        max = 1;
      } else if (cur_max == temp) {
        max++;
      }
      cout << temp;
    }
    // cout << temp;
    return max;
  }
};