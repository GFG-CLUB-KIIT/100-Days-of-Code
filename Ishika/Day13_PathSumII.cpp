// Problem Link: https://leetcode.com/problems/path-sum-ii/

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
    void helper(TreeNode* root, int targetSum, vector<vector<int>>&result, vector<int>temp){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            if(targetSum == root->val){
                temp.push_back(root->val);
                result.push_back(temp);
            }
            return;
        }
        temp.push_back(root->val);
        helper(root->left, targetSum - root->val, result, temp);
        helper(root->right, targetSum - root->val, result, temp);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>result;
        vector<int>temp;
        helper(root, targetSum, result, temp);
        return result;
    }
};