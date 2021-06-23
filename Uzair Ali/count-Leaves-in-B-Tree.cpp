//Question Link: https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1


int countLeaves(Node* root)
{
  if (root==NULL){return 0;}
  if(root->left == NULL and root->right == NULL){return 1;}
  int lef = countLeaves(root->left);
  int rig = countLeaves(root->right);
  return lef+rig;
}
