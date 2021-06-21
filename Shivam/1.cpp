// https://codeforces.com/problemset/problem/230/B
#include<bits/stdc++.h>
#define mod 1e9+7
#define modulo 998244353
using namespace std;
 
typedef unsigned long long int  ull;
typedef long long int ll;
 
template<typename T> T max(T a, T b, T c)
{
    return max(a, max(b, c));
}
 
void read_input_from_file()
{
    #ifndef ONLINE_JUDGE
    freopen("input_file.txt","r",stdin);
    freopen("output_file.txt","w",stdout);
    #endif
}
 
const ll a = 1e6+3;
ll ans[a];
 
void isprime(ll n , ll* arr)
{
    for(ll i=2;i<a;i++)
    {
        if(!ans[i])
        {
            for(ll j=i*i;j<=a;j+=i)
            {
                ans[j] = 1;
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(ll(sqrt(arr[i])) !=  double(sqrt(arr[i])))
        {
            cout<<"NO\n";
            continue;
        }
        ll check = sqrt(arr[i]);
        if(arr[i]==1 || arr[i]==2 || arr[i]==3)
        {
            cout<<"NO\n";
        }
        else
        {
            if(!ans[check])
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return;
}
 
void shivam()
{
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    isprime(n,arr);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // read_input_from_file();
    ll t = 1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        shivam();
    }
    return 0;
}