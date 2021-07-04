// Problem Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool pfound = false, qfound = false;
    void helper(TreeNode* root, TreeNode* p, TreeNode* q, vector<pair<TreeNode*, int>>& range, int height){
        if(root == NULL) return;
        if(root->val >=p->val && root->val <= q->val){
            range.push_back(make_pair(root, height));
        }
        helper(root->left, p, q, range, height+1);
        helper(root->right, p, q, range, height+1);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<pair<TreeNode*, int>> range;
        pfound = false;
        qfound = false;
        TreeNode* left = p->val < q->val ? p : q;
        TreeNode* right = p->val > q->val ? p : q;
        helper(root, left, right, range, 0);
        int min_ = INT_MAX;
        TreeNode* LCA = NULL;
        for(int i = 0; i<range.size(); i++){
            cout << range[i].first->val <<"     "<< range[i].second<< endl;
            if(min_ > range[i].second){
                min_= range[i].second;
                LCA = range[i].first;
            }
        }
        return LCA;
    }
};