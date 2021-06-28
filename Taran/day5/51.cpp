// Problem Link : https://leetcode.com/problems/jump-game-iii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool bfs(vector<int> &arr, int start) {
    int n = arr.size();
    vector<int> vis(n, 0);
    if (arr[start] == 0) {
      return true;
    }
    queue<int> q;
    q.push(start);
    while (!q.empty()) {
      int a = q.front();
      q.pop();
      if (arr[a] == 0) {
        return true;
      }
      if (a - arr[a] >= 0 && vis[a - arr[a]] == 0) {
        vis[a - arr[a]] = 1;
        q.push(a - arr[a]);
      }
      if (a + arr[a] < n && vis[a + arr[a]] == 0) {
        vis[a + arr[a]] = 1;
        q.push(a + arr[a]);
      }
    }
    return false;
  }
  bool canReach(vector<int> &arr, int start) {
    int n = arr.size();
    return bfs(arr, start);
  }
};

// bfs