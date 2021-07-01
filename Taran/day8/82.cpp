// Problem Link :
// https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/
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
  int height(TreeNode *root) {
    if (root == NULL) {
      return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    return 1 + max(l, r);
  }
  // TreeNode *lcadfs(TreeNode *root,int cur,int height_lca){
  //     if(root==NULL){
  //         return NULL;
  //     }
  //     if(cur==height_lca){
  //         return root;
  //     }
  //     TreeNode *l=lcadfs(root->left,cur+1,height_lca);
  //     TreeNode *r=lcadfs(root->right,cur+1,height_lca);
  //     if(l!=NULL && r!=NULL){
  //         return root;
  //     }
  //     if(l==NULL){
  //         return r;
  //     }else{
  //         return l;
  //     }
  // }
  TreeNode *lcaDeepestLeaves(TreeNode *root) {
    if (root == NULL) {
      return NULL;
    }
    //          TreeNode *left=lcaDeepestLeaves(root->left);
    //          TreeNode *right=lcaDeepestLeaves(root->right);

    int l = height(root->left);
    int r = height(root->right);
    // cout << l << " " << r << "\n";
    if (l == r) {
      return root;
    } else if (l < r) {
      return lcaDeepestLeaves(root->right);
    } else {
      return lcaDeepestLeaves(root->left);
    }
    // int height_lca = height(root);
    //         // int cur_lca =0;
    //         cout << height_lca << " ";
    //         return lcadfs(root,0,height_lca);

    // return root;
  }
};