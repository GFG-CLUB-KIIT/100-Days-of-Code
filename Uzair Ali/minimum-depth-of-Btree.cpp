// Question Link: https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
    
    // int check(TreeNode* root)
    // {
    //     if(root==NULL){return 0;}
    //     if(root->left==NULL and root->right==NULL){return 1;}
    //     int lef = INT_MAX;
    //     int rig = INT_MAX;
    //     if(root->left){lef = check(root->left);}
    //     if(root->right){rig = check(root->right);}
    //     return min(lef,rig)+1;
    // }
    
        int check2(TreeNode* root, int &count)
    {
        if(root==NULL){return 0;}
        if(root->left==NULL and root->right==NULL){count++; return count;}
        int lef = INT_MAX;
        int rig = INT_MAX;
        if(root->left){lef = check2(root->left, count);}
        if(root->right){rig = check2(root->right, count);}
        return min(lef,rig)+1;
    }
    
    int minDepth(TreeNode* root) {
        int count = 0;
        return check2(root, count);
        
    }
};
