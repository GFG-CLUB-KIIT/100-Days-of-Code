// Problem Link :https://leetcode.com/problems/reshape-the-matrix/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c) {
    vector<vector<int>> ans(r, vector<int>(c, 0));
    int n = mat.size();
    int m = mat[0].size();
    if (r * c != (n * m)) {
      return mat;
    }
    for (int i = 0; i < (n * m); i++) {
      // int temp=i+
      ans[i / c][i % c] = mat[i / n][i % n];
    }
    return ans;
  }
};