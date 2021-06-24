//https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/submissions/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;


class trieNode{
  public:
    trieNode *left;
    trieNode *right;

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



}

int maxval(int n,trieNode *head,int *arr)
{
    int maxv=INT_MIN;

    for(int i=0;i<n;i++)
    {
        trieNode *curr=head;
      int val=arr[i];
      int curv=0;
      for(int j=31;j>=0;j--)
      {
       int b=(val>>j)&1;
       if(b==0)
       {
         if(curr->right)
         {
            curv+=pow(2,j);
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
             curv+=pow(2,j);
             curr=curr->left;

         }
         else
         {
             curr=curr->right;

         }


       }



      }

     if(curv>maxv)
     {
         maxv=curv;

     }
    }


  return maxv;


}


int main()
{

 int arr[6]={8,1,2,15,10,5};
 trieNode *head=new trieNode();
 for(int i=0;i<6;i++)
 {
     create(arr[i],head);
 }
 cout<<maxval(6,head,arr)<<endl;




    return 0;
}
