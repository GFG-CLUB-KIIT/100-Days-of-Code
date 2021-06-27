// Problem Link :
// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string removeOccurrences(string s, string part) {

    int n = part.size();
    //         while(s.find(part)==string::npos)
    //         for(int i=0;i<s.size();i++){
    //             s=s.erase(i,n-1);

    //         }
    while (true) {
      string w = "";
      for (int i = 0; i < s.size(); i++) {
        bool flag = false;
        if (s[i] == part[0]) {
          flag = true;
          for (int j = 0; j < n; j++) {
            if (s[i + j] == part[j]) {
              continue;
            } else {
              flag = false;
              break;
            }
          }
        }

        if (flag == false) {
          w += s[i];
        }
        if (flag == true) {
          i += n - 1;
        }
      }
      int a1 = s.size();
      if (w.size() == s.size()) {
        return w;
      } else {
        s = w;
        a1 = w.size();
      }
    }
  }
};