// Problem Link: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/

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
    TreeNode* helper(vector<int>& preorder, int left, int right){
        cout << left <<"    "<< right<<endl;
        if(left > right) return NULL;
        if(left == right) return new TreeNode(preorder[left]);
        TreeNode* root = new TreeNode(preorder[left]);
        int mid = left;
        for(int i = left+1; i<=right; i++){
            if(preorder[i] < root->val){
                mid = i;
            }
            else{
                break;
            }
        }
        root->left = helper(preorder, left+1, mid);
        root->right = helper(preorder, mid+1, right);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return helper(preorder, 0, preorder.size()-1);
    }
};