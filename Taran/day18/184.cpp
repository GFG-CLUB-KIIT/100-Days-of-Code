// Problem Link :
// https://leetcode.com/problems/next-greater-node-in-linked-list/
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  vector<int> nextLargerNodes(ListNode *head) {
    vector<int> ans;
    vector<int> result;
    while (head != NULL) {
      ans.push_back(head->val);
      head = head->next;
    }
    stack<int> s;
    int n = ans.size();
    for (int i = n - 1; i >= 0; i--) {
      while (s.empty() == false && s.top() <= ans[i]) {
        s.pop();
      }
      int next_g = s.empty() ? 0 : s.top();
      // if(s.size()==0){
      //     result.push_back(0);
      // }else
      result.push_back(next_g);
      // insert into stack
      s.push(ans[i]);
    }
    reverse(result.begin(), result.end());
    return result;
  }
};