//Build a segement tree

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void buildtree(int* arr,int* tree,int start,int en,int treenode)
{
    if(start==en)
    {
        tree[treenode]=arr[start];
        return;
    }
    int mid=(start+en)/2;
    buildtree(arr,tree,start,mid,2*treenode);
    buildtree(arr,tree,mid+1,en,2*treenode+1);

    tree[treenode]=tree[2*treenode] + tree[2*treenode+1];
}
void update(int *arr,int* tree,int start,int en,int treenode,int idx,int val)
{

    if(start==en)
    {
        arr[idx]=val;
        tree[treenode]=val;
        return;

    }

    int mid=(start+en)/2;
    if(idx>mid)
    {
        update(arr,tree,mid+1,en,2*treenode+1,idx,val);
    }
    else
    {
        update(arr,tree,start,mid,2*treenode,idx,val);
    }

    tree[treenode]=tree[2*treenode] + tree[2*treenode+1];
}
int query(int *arr,int *tree,int start,int en,int treenode,int left,int right)
{
    if(right<start || left>en)
    {
        return 0;
    }
    if(start>=left && right>=en)
    {
        return tree[treenode];
    }
    int mid=(en+start)/2;
    int ans1=query(arr,tree,start,mid,2*treenode,left,right);
    int ans2=query(arr,tree,mid+1,en,2*treenode+1,left,right);
    return ans1+ans2;

}


int main()
{
    int arr[]={1,2,3,4,5};
    int *tree=new int[10];
    buildtree(arr,tree,0,4,1);
    update(arr,tree,0,4,1,2,10);

    for(int i=1;i<10;i++)
    {
        cout<<tree[i]<<" ";
    }
    cout<<endl;
     cout<<query(arr,tree,0,4,1,2,4)<<endl;;

    return 0;
}
