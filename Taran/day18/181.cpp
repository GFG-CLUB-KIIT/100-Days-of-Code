// Problem Link :
// https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode()
      : val(0), left(nullptr), right(nullptr){} * TreeNode(int x)
      : val(x),
        left(nullptr),
        right(nullptr){} * TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x),
        left(left), right(right) {}
};
class Solution {
public:
  void inorder(TreeNode *root, vector<int> &ans) {
    if (root != NULL) {
      inorder(root->left, ans);
      // cout << root->val;
      ans.push_back(root->val);
      inorder(root->right, ans);
    }
    return;
  }
  vector<int> getAllElements(TreeNode *root1, TreeNode *root2) {
    vector<int> l1, l2;
    vector<int> merge;
    // l1.p
    inorder(root1, l1);
    inorder(root2, l2);
    // for(auto i:l1){
    //     cout << i << " ";
    // }
    int i = 0, j = 0;
    int n = l1.size(), m = l2.size();
    while (i < n && j < m) {
      if (l1[i] < l2[j]) {
        merge.push_back(l1[i]);
        i++;
      } else {
        merge.push_back(l2[j]);
        j++;
      }
    }
    while (i < n) {
      merge.push_back(l1[i]);
      i++;
    }
    while (j < m) {
      merge.push_back(l2[j]);
      j++;
    }
    return merge;
  }
};