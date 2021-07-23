//https://codeforces.com/contest/1520/problem/C#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+1][n+1];
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<-1<<endl;
        return ;
    }
    else
    {

      int k=1;
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if((i+j)%2==0)
              {
                  arr[i][j]=k;
                  k++;
              }

          }
      }
       for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if((i+j)%2!=0)
              {
                  arr[i][j]=k;
                  k++;
              }

          }
      }


    }
     for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=n;j++)
          {
             cout<<arr[i][j]<<" ";
          }
          cout<<endl;
      }
      return ;


}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    solve();
   }


    return 0;
}