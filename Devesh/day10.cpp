https://codeforces.com/contest/1538/problem/C
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
   ll ans=0;
   for(int i=0;i<n-1;i++)
   {
       auto itr1=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
       auto itr2=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
       ans+=itr2-itr1;
      // cout<<ans<<endl;
   }
   cout<<ans<<endl;
    }




    return 0;
}
