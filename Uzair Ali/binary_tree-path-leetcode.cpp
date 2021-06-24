// Question Link: https://leetcode.com/problems/binary-tree-paths/

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
     vector <string> vec;
    void path(TreeNode* root, string str)
    {
        if(root->left==NULL and root->right==NULL)
        {
            str = str + to_string(root->val);
            vec.push_back(str);
            return;
        }
         str = str + to_string(root->val)+"->";
        if(root->left!=NULL){path(root->left,str);}
        if(root->right!=NULL){path(root->right,str);}
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string str = "";
       
        if(root==NULL)
        {
            return vec;
        }
        path(root, str);
        return vec;
    }
};
