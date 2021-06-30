// Problem Link : https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool canBeEqual(vector<int> &target, vector<int> &arr) {
    int n = target.size();
    int n1 = arr.size();
    // if(n == n1){
    //     return true;
    // }
    int count = 0;
    map<int, int> m;
    // sort(arr.begin(),arr.end());
    for (int i = 0; i < n; i++) {
      m[target[i]]++;
      m[arr[i]]--;
    }
    bool flag = false;
    for (auto i : m) {
      cout << i.first << " " << i.second << "\n";
      if (i.second != 0) {
        return false;
      }
    }
    return true;
  }
};