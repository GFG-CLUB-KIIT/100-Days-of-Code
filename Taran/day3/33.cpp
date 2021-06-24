// Problem Link : https://leetcode.com/problems/balance-a-binary-search-tree/
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
  vector<TreeNode *> build;
  void inorder(TreeNode *root) {

    if (root != NULL) {
      inorder(root->left);
      // cout << root->val;
      build.push_back(root);
      inorder(root->right);
    }
    // return a;
  }

  TreeNode *printbalance(int l, int r) {

    TreeNode *cur;
    // cout << l << " " << "END" << r << "\n";
    if (l > r) {
      return NULL;
    }

    int mid = l + (r - l) / 2;
    cur = build[mid]; // made it root (mid)
    cur->left = printbalance(l, mid - 1);
    cur->right = printbalance(mid + 1, r);

    return cur;
  }
  TreeNode *balanceBST(TreeNode *root) {
    TreeNode *left = root, *right = root;
    inorder(root);
    int r = build.size();
    return printbalance(0, r - 1);
    //         if(cur !=NULL){
    //             cout << root->data;

    //         }
    // return cur;
  }
};