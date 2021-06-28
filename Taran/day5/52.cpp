// Problme Link : https://leetcode.com/problems/jump-game-vii/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool bfs(string s, int mini, int maxi, int index) {
    int n = s.size();
    if (s[n - 1] != '0') {
      return false;
    }
    vector<bool> vis(n, false);
    queue<int> q;
    q.push(0);
    vis[0] = true;
    int max_index = 0;
    while (!q.empty()) {
      int a = q.front();
      q.pop();
      if (a == n - 1) {
        return true;
      }
      for (int j = max(a + mini, max_index); j <= min(a + maxi, n - 1); j++) {
        if (s[j] == '0' && vis[j] == false) {
          vis[j] = true;
          q.push(j);
        }
      }
      // since we have processed till a + maxi so update maxReach to next index
      max_index = min(a + maxi + 1, n - 1);
    }
    return false;
  }
  bool canReach(string s, int minJump, int maxJump) {
    return bfs(s, minJump, maxJump, 0);
  }
};