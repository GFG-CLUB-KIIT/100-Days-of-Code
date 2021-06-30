// https://leetcode.com/problems/average-of-levels-in-binary-tree/

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
    void traversal(TreeNode *root, vector<double> &ans)
    {
        if(root == NULL)
        {
            return;
        }
        
        long long int s=0;
        long long int el=0;
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
                el++;
            }
            else
            {
                double an = s/(el*1.0) ;
                ans.push_back(an);
                if(q.size()!=0)
                {
                    q.push(NULL);
                }
                s=0;
                el=0;
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
    
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        traversal(root,ans);
        return ans;
    }
};