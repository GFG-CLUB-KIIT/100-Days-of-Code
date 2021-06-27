//MAX XOR  value of a subarray  using trie
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

class trieNode{
  public:
    trieNode *left;
    trieNode *right;
    int val;

};
void create(int n,trieNode *head)
{
    trieNode* curr=head;
    for(int i=31;i>=0;i--)
    {
      int b = (n>>i)&1;
      if(b==0)
      {
        if(!curr->left)
        {
            curr->left=new trieNode();
        }
        curr=curr->left;

      }
      else
      {
          if(!curr->right)
          {
              curr->right=new trieNode();
          }
          curr=curr->right;
      }

    }

    curr->val=n;


}


int maxval(int va,trieNode *head)
{



     int ans=va;
     trieNode *curr=head;
      for(int j=31;j>=0;j--)
      {
       int b=(va>>j)&1;
       if(b==0)
       {
         if(curr->right)
         {

           curr=curr->right;
         }
         else
         {
             curr=curr->left;
         }

       }
       else
       {
         if(curr->left)
         {

             curr=curr->left;

         }
         else
         {
             curr=curr->right;

         }


       }



      }

       return (curr->val)^va;


}




int main()
{

    //int arr[6]={8,1,2,15,10,5};
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 trieNode *head=new trieNode();
 int xor_v=0,result=INT_MIN;
 for(int i=0;i<n;i++)
 {
     xor_v = xor_v ^ arr[i];
     //cout<<xor_v<<endl;
     create(xor_v,head);
     result=max(result,maxval(xor_v,head));
    // cout<<i<<result<<endl;

 }
 cout<<result<<endl;



    return 0;
}
