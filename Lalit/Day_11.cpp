// https://codeforces.com/contest/1066/problem/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int q, no;
    char ch;
    cin>>q;
    map<ll,pair<ll,char>>mp;
    int l=1, r=1;
    for(int i=0; i<q; i++)
    {
        cin>>ch>>no;
        if(ch == 'L')
        {
            mp[no] = make_pair(l,ch);
            if(l==1)
            {
                r++;
            }
            l++;
        }
        else if(ch == 'R')
        {
            mp[no] = make_pair(r,ch);
            if(r==1)
            {
                l++;
            }
            r++;
        }
        else  
        {
            int le=0, re=0, ans=-1;

            if(mp[no].second == 'L')
            {
                le = l - mp[no].first - 1;
                re = (r - 1 - 1) + (mp[no].first - 1); 
                ans = min(le,re);
                // cout<<le<<" "<<re<<endl;
            }
            else
            {
                le = (l - 1 - 1) + (mp[no].first - 1);
                re = r - mp[no].first - 1;
                // cout<<le<<" "<<re<<endl;
                ans = min(le,re);
            }

            cout<<ans<<endl;
            
        }
    }

}

int main()
{
    ll t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}