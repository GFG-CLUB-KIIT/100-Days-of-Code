// Problem Link: https://leetcode.com/problems/binary-tree-tilt/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    pair<int, int> helper(TreeNode* root){
        if(root == NULL){
            pair<int, int>basepair;
            basepair.first = 0;
            basepair.second = 0;
            return basepair;
        }
        if(root->left == NULL && root->right == NULL){
            pair<int, int>basepair;
            basepair.first = root->val;
            basepair.second = 0;
            return basepair;
        }
        pair<int, int>leftpair = helper(root->left);
        pair<int, int>rightpair = helper(root->right);
        pair<int, int>newpair;
        newpair.second = abs(leftpair.first - rightpair.first);
        newpair.first = leftpair.first + rightpair.first + root->val;
        sum+= newpair.second;
        return newpair;
    }
    int findTilt(TreeNode* root) {
        sum = 0;
        pair<int, int> res = helper(root);
        return sum;
    }
};