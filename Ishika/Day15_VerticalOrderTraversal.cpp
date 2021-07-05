// Problem Link: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

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
class Pair{
        public:
        int width;
        int level;
        int data;
        Pair(int width, int level, int data){
            this->width = width;
            this->level = level;
            this->data = data;
        }
    };
    bool compare(const Pair* e1, const Pair* e2){
        if(e1->width == e2->width){
            if(e1->level == e2->level){
                return e1->data < e2->data;
            }
            return e1->level < e2->level;
        }
        return e1->width < e2->width;
    }
class Solution {
public:
    
    
    int min_ = INT_MAX, max_=INT_MIN;
    void helper(TreeNode* root, int width, int level, vector<Pair*>& arr){
        if(root == NULL) return;
        min_ = min(min_, width);
        max_ = max(max_, width);
        arr.push_back(new Pair(width, level, root->val));
        helper(root->left, width-1, level+1, arr);
        helper(root->right, width+1, level+1, arr);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<Pair*> arr;
        min_ = INT_MAX, max_=INT_MIN;
        helper(root, 0, 0, arr);
        sort(arr.begin(), arr.end(), compare);
        vector<vector<int>>result(max_ - min_ + 1, vector<int>());
        int idx = 0, currwidth = arr[0]->width;
        for(int i = 0; i< arr.size(); i++){
            Pair* top = arr[i];
            if(top->width == currwidth)
                result[idx].push_back(top->data);
            else{
                idx++;
                currwidth = top->width;
                result[idx].push_back(top->data);
            }
        }
        
        return result;
    }
};