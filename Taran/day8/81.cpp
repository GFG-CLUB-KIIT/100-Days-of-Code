// Problem Link : https://leetcode.com/problems/combination-sum-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<vector<int>> ans;
  vector<int> temp;
  void findans(vector<int> &candidates, int n, int index, int target) {
    if (target == 0) {
      ans.push_back(temp);
      return;
    }

    for (int i = index; i < candidates.size(); i++) {
      if (i > index && candidates[i] == candidates[i - 1]) {
        continue;
      }
      if (target - candidates[i] < 0) {
        break;
      }
      temp.push_back(candidates[i]);
      findans(candidates, n, i + 1, target - candidates[i]);
      temp.pop_back();
    }
  }
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    int i, j, count = 0;
    int n = candidates.size();
    sort(candidates.begin(), candidates.end());
    findans(candidates, n, 0, target);
    return ans;
  }
};