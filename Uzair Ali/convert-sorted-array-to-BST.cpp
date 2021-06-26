// Question Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
    
    TreeNode* construct(vector <int> vec, int start, int end)
    {
        if(start>end){return NULL;}
        int mid = (start+end)/2;
        TreeNode* n = new TreeNode(vec[mid]);
         TreeNode* left_child = construct(vec, start, mid-1);
         TreeNode* right_child = construct(vec, mid+1, end);
        n->left = left_child;
        n->right = right_child;
        
        return n;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size()-1;
        return construct(nums, 0, n);
        
    }
};
