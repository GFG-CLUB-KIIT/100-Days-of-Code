// Problem Link :https://leetcode.com/problems/symmetric-tree/
#include <bits/stdc++.h>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  bool checkmirror(TreeNode *root1, TreeNode *root2) {
    if (root1 == NULL && root2 == NULL) {
      return true;
    }
    if (root1 != NULL && root2 != NULL) {
      if (root1->val == root2->val) {
        return checkmirror(root1->left, root2->right) &&
               checkmirror(root1->right, root2->left);
      }
    }
    return false;
  }
  bool isSymmetric(TreeNode *root) {
    bool flag = checkmirror(root, root);
    return flag;
  }
};