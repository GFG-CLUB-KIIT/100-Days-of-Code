// https://codeforces.com/problemset/problem/158/B
#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int  ull;
typedef long long int ll;

ll cnt[10];

const int mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ++cnt[arr[i]];
    }
    ans += cnt[4];
    if(cnt[2])
    {
        if(cnt[2]%2==0)
        {
            ans += (cnt[2]/2);
            cnt[2] = 0;
        }
        else
        {
            ans += (cnt[2]/2);
            cnt[2] = 1;
        }
    }
    if(cnt[3]==cnt[1])
    {
        ans += cnt[3];
        cnt[3] = cnt[1] = 0;
    }
    else if(cnt[3]>cnt[1])
    {
        ans += cnt[1];
        cnt[3] -= cnt[1];
        ans += cnt[3];
        cnt[3] = 0;
        cnt[1] = 0;
    }
    else if(cnt[1]>cnt[3])
    {
        ans += cnt[3];
        cnt[1] -= cnt[3];
        cnt[3] = 0;
    }
    if(cnt[2]) // one 2 is left
    {
        if(cnt[1]<=2)
        {
            ans++;
            cnt[1] = 0;
            cnt[2] = 0;
        }
        else
        {
            ans++;
            cnt[1] -= 2;
            cnt[2] = 0;
            if(!(cnt[1]%4) && cnt[1]!=0)
            {
                ans += (cnt[1]/4);
                cnt[1] = 0;
            }
            else
            {
                ans += (cnt[1]/4);
                cnt[1] = 0;
                ans++;
            }
        }
    }   
    if(cnt[1])
    {
        if(!(cnt[1]%4))
        {
            ans += (cnt[1]/4);
            cnt[1] = 0;
        }
        else
        {
            ans += (cnt[1]/4);
            ans++;
            cnt[1] = 0;
        }
    }
    cout<<ans;
    return 0;
}