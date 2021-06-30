//Subxor less than k using tries
#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class trieNode
{
    public:
    trieNode *left;
    trieNode *right;
    int val;
    trieNode()
    {
        val=0;
        left = NULL;  //left denotes 0
        right = NULL; //right denotes 1
    }

};

void create(trieNode *head,int va)
{
    trieNode *curr=head;
    for(int i=31;i>=0;i--)
    {
      int b=(va>>i)&1;
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
    curr->val=va;

}

int maxv(int a,trieNode* head)
{
    trieNode* curr=head;
    for(int i=31;i>=0;i--)
    {
    int b=(a>>i)&1;
    if(b==0)
    {
       if(curr->right)
       {
           curr=curr->right;
       }
       else
        curr=curr->left;

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
   // cout<<curr->val<<endl;
    return (curr->val)^a;


}



int main()
{

  int t;
  cin>>t;
  while(t--)
  {
 trieNode* head=new trieNode();
  int n,k;
  cin>>n>>k;

  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];

  }


    int xor_v=0;
    int cou=0;
    for(int i=0;i<n;i++)
    {
        xor_v = xor_v ^ arr[i];

        create(head,xor_v);
       if(maxv(xor_v,head)<k)
       {
          cou++;
       }

    }
    cout<<cou<<endl;

  }

    return 0;
}
