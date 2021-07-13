// https://codeforces.com/contest/1547/problem/E

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll idx[k], val[k];
    for(ll i=0; i<k; i++)
    {
        cin>>idx[i];
    }
    for(ll i=0; i<k; i++)
    {
        cin>>val[i];
    }

    ll ans[n+1];
    memset(ans,-1,sizeof(ans));

    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>pq;
    for(ll i=0; i<k; i++)
    {
        ans[idx[i]] = val[i];
        pq.push({val[i],idx[i]});
    }

    while(!pq.empty())
    {
        pair<ll,ll> p = pq.top();
        pq.pop();
        ll temp = p.first;
        ll ix = p.second;

        // cout<<temp<<" "<<ix<<endl; 

        if((ix-1>=1 && ans[ix-1] == -1) || (ix-1>=1 && ans[ix-1] > temp+1))
        {
            ans[ix-1] = temp+1;
            pq.push({temp+1,ix-1});
        }
        if((ix+1<=n && ans[ix+1] == -1) || (ix+1<=n && ans[ix+1] > temp+1))
        {
            ans[ix+1] = temp+1;
            pq.push({temp+1,ix+1});
        }
    }

    for(ll i=1; i<=n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}