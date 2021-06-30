// Problem Link : https://leetcode.com/problems/tuple-with-same-product/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int tupleSameProduct(vector<int> &arr) {
    int n = arr.size();
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        m[arr[i] * arr[j]]++;
      }
    }
    for (auto i : m) {
      count += i.second * (i.second - 1) / 2;
    }
    return count * 8;
  }
};