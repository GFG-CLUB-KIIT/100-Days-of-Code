// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/


class Solution {
public:

    void generate(TreeNode *&root)
    {
        if(root == NULL || (root->left == NULL && root->right == NULL))
        {
            return;
        }

        if(root->left)
        {
            generate(root->left);
            TreeNode *temp = root->right;
            root->right = root->left;
            root->left = NULL;

            TreeNode *tt = root->right;
            while(tt->right)
            {
                tt = tt->right;
            }

            tt->right = temp;
        }

        generate(root->right);

    }

    void flatten(TreeNode* root) {
        generate(root);
    }
};
