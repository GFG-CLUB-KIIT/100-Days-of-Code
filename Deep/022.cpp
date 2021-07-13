/*
Problem - https://leetcode.com/problems/binary-tree-inorder-traversal/
*/

class Solution {
public:
    
    void traverse(TreeNode* root, vector<int> &ans){
        if(!root){
            return;
        }
        if(root->left){
            traverse(root->left, ans);
        }
        ans.push_back(root->val);
        traverse(root->right, ans);
        return;
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;
    }
};