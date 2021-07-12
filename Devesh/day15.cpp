//https://codeforces.com/problemset/problem/1497/A
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         mp[x]++;
     }

     map<int,int>::iterator itr;
     for(itr=mp.begin();itr!=mp.end();itr++)
     {
         if(itr->second>0)
         {
             cout<<itr->first<<" ";
             itr->second--;
         }


     }
      for(itr=mp.begin();itr!=mp.end();itr++)
     {
         while(itr->second>0)
         {
             cout<<itr->first<<" ";
             itr->second--;
         }

     }
     cout<<endl;
     delete mp;

    }





    return 0;
}
