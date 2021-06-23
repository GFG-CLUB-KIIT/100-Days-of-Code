// Question Link: https://leetcode.com/problems/symmetric-tree/
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
    
    bool sym(TreeNode* lef, TreeNode* rig)
    {
        if(lef==NULL and rig==NULL){return true;}
        if(lef==NULL and rig!=NULL){return false;}
        if(lef!=NULL and rig==NULL){return false;}
        if(lef->val != rig->val){return false;}
        return sym(lef->left, rig->right) and sym(lef->right, rig->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){return true;}
        
        return sym(root->left, root->right);
    }
};
