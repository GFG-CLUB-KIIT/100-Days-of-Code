//https://codeforces.com/problemset/problem/1517/A
#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    if(n%2050!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
     ll x=n/2050;
     long long sum=0;
     while(x>0)
     {
         sum=sum+x%10;
         x=x/10;
     }

        cout<<sum<<endl;
    }


    }



    return 0;
}
