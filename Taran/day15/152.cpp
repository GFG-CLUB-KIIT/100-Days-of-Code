// Problem Link : https://leetcode.com/problems/sort-characters-by-frequency/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  // static bool cmp(pair<int,int>p1,pair<int,int>p2){
  //     if(p1.first!=p2.first){
  //         return p1.first<p2.first; //whichever small
  //     }else
  //         return p1.second<p2.second;
  //     // return false;
  // }
  string frequencySort(string s) {
    map<char, int> m;
    string t = s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
      m[s[i]]++;
    }
    vector<pair<int, char>> v;
    for (auto i : m) {
      // cout << i.first << " " << i.second << " ";
      char best_c = i.first;
      int best = i.second;
      v.push_back({best, best_c});
    }
    sort(v.begin(), v.end());
    string result = "";
    for (int i = v.size() - 1; i >= 0; i--) {
      // cout << (char)i.first << " " << i.second << "\n";
      while ((v[i].first)--)
        result.push_back((char)v[i].second);
    }
    return result;
    // return t;
  }
};