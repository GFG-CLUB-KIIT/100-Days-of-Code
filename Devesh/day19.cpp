
https://codeforces.com/contest/1543/submission/122665084
#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<" "<<0<<endl;
        return;
    }

  ll gcd=abs(b-a);
  ll g=a%gcd;
   // long long c=0;
  cout<<gcd<<" "<<min(a%gcd,gcd-g)<<endl;
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