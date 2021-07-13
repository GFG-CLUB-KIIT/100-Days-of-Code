// https://codeforces.com/contest/1066/problem/D

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, b, sz;
    cin>>n>>b>>sz;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    ll left=0, right=n-1, mbg=INT_MIN;
    while(left<=right)
    {
        ll mid = (left + right) / 2;
        ll c=0, s=0, bg=0;
        for(ll i=mid; i<n; i++)
        {
            if(s+arr[i]<=sz)
            {
                s += arr[i];
                c++;
            }
            else
            {
                if(arr[i]<=sz)
                {
                    s = arr[i];
                    bg++;
                    c++;
                }
                else
                {
                    s = 0;
                    break;
                }
            }
        } 
        if(s > 0)
        {
            bg++;
        }

        if(bg<=b)
        {
            mbg = max(c,mbg);
        }

        if(bg<=b)
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }

    }

    cout<< mbg << endl;

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
