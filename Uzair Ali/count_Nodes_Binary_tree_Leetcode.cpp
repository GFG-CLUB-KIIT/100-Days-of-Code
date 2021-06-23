// Question Link: https://leetcode.com/problems/count-complete-tree-nodes
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
    int countNodes(TreeNode* root) {
        if(root == NULL){return 0;}
        else
        {
            int lef = countNodes(root->left);
            int rig = countNodes(root->right);
            return (lef+ rig)+1;
        }
        
    }
};
