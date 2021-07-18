// Problem Link : https://leetcode.com/problems/random-pick-with-weight/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> ans;
  Solution(vector<int> &w) {
    int n = w.size();
    ans.push_back(w[0]);
    for (int i = 1; i < n; i++) {
      ans.push_back(ans[i - 1] + w[i]);
    }
    // for(auto i:ans){
    //     cout << i << " ";
    // }
  }
  int pickIndex() {

    // int find=0;
    // int n=ans.back()+1;
    // int cal=rand()%(n);
    auto it =
        upper_bound(ans.begin(), ans.end(), rand() % ans[ans.size() - 1]) -
        ans.begin();
    return it;
  }
};