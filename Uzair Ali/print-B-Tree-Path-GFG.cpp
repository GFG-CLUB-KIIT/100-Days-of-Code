// Question Link: https://www.geeksforgeeks.org/print-path-root-given-node-binary-tree/
bool getPath(Node* root, int key, vector <int> &ans)
{
   if(root==NULL){return false;}
   ans.push_back(root->data);
   if(root->data==key){return true;}

   bool lef = getPath(root->left, key, ans);
   bool rig = getPath(root->right, key, ans);
   if(lef or rig){return true;}
   ans.pop_back();
   return false;
}
