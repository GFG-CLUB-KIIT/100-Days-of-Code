// Question Link: https://leetcode.com/problems/diameter-of-binary-tree/
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
    
    int height(TreeNode* root)
    {
        if(root==NULL){return 0;}
        int lef = height(root->left);
        int rig = height(root->right);
        return max(lef, rig)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){return 0;}
        
        int option1 = height(root->left)+height(root->right);
        int option2 = diameterOfBinaryTree(root->left);
        int option3 = diameterOfBinaryTree(root->right);
        
        int max1 = max(option1, option2);
        return max(max1, option3);
    }
};
