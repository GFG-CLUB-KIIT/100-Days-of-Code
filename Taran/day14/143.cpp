// Problem Link : https://leetcode.com/problems/container-with-most-water/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxArea(vector<int> &height) {
    int n = height.size();
    int result = 0;

    int max_areacover = -1, cur_areacover = 0;
    int low = 0, high = n - 1;
    while (low < high) {
      cur_areacover =
          max(cur_areacover, (high - low) * (min(height[low], height[high])));
      if (height[low] > height[high]) {
        high--;
      } else {
        low++;
      }
      max_areacover = max(max_areacover, cur_areacover);
    }
    // cout << lmax << " " << rmax << "\n";
    return max_areacover;
  }
};