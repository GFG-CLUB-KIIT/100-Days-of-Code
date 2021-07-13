// https://codeforces.com/contest/1547/problem/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll k, n, m;
    cin>>k>>n>>m;

    ll arr[n], arr1[m];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(ll i=0; i<m; i++)
    {
        cin>>arr1[i];
    }

    vector<ll>v;
    ll l1=0, l2=0, flag = 0;
    for(ll i=0; i<n+m; i++)
    {
        if(arr[l1] <= k && l1 < n)
        {
            v.push_back(arr[l1]);
            if(arr[l1] == 0)
            {
                k++;
            }
            
            l1++;
            // cout<<"1"<<endl;
        }
        else if(arr1[l2] <= k && l2 < m)
        {
            v.push_back(arr1[l2]);
            if(arr1[l2] == 0)
            {
                k++;
            }
            l2++;
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        cout<<"-1"<<endl;
        return;
    }

    for(auto x: v)
    {
        cout<<x<<" "; 
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