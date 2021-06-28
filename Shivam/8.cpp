// https://codeforces.com/problemset/problem/1541/B
#include<bits/stdc++.h>
using namespace std;
 
#define mod 1e9+7
#define modulo 998244353
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
cout << vars << " = ";
string delim = "";
(..., (cout << delim << values, delim = ", "));
}
 
typedef unsigned long long int  ull;
typedef long long int ll;
 
void read_input_from_file()
{
    #ifndef ONLINE_JUDGE
    freopen("input_file.txt","r",stdin);
    freopen("output_file.txt","w",stdout);
    #endif
}
 
void shivam()
{
    ll n;
    cin>>n;
    pair<ll , ll> arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr , arr + n);
    ll ans = 0;
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            ll val = arr[i].first * arr[j].first;
            if(val > 2*n)
            {
                break;
            }
            else if(val == arr[i].second + arr[j].second)
            {
                ans++;
            }
        }   
    }
    cout<<ans<<"\n";
}
 
int main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // read_input_from_file();
    ll t = 1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        shivam();
    }
    auto end = std::chrono::high_resolution_clock::now();
    //cout <<"\nExecution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds "<<"\n";
    return 0;
}