// https://leetcode.com/problems/deepest-leaves-sum/

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
    void traversal(TreeNode *root, int &s)
    {
        if(root == NULL)
        {
            return;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            
            
            if(temp!=NULL)
            {
                s += temp->val;
            }
            else
            {
                if(q.size()!=0)
                {
                    s=0;
                    q.push(NULL);
                }
                
                continue;
            }
            
            if(temp->left)
            {
                q.push(temp->left);
            }
            
            if(temp->right)
            {
                q.push(temp->right);
            }
            
        }   
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int s=0;
        traversal(root,s);
        return s;
    }
};