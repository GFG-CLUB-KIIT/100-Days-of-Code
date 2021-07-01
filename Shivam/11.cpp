// https://codeforces.com/problemset/problem/1539/B
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
map<char,int> mp;
void shivam()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;  
    int ans[n];
    ull sum = 0;
    for(int i=0;s[i]!='\0';i++)
    {
        sum += mp[s[i]];
        ans[i] = sum;
    }
    while(q--)
    {
        int start,end;
        cin>>start>>end;
        if(start==1)
        {
            cout<<ans[end - 1]<<"\n";
        }
        else
        {
            cout<<ans[end - 1] - ans[start - 2]<<"\n";
        }
    }
}
 
int main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // read_input_from_file();
    ll t = 1;
    // cin>>t;
    for(int i=1;i<=26;i++)
    {
        mp[96+i] = i;
    } 
    for(ll i=1;i<=t;i++)
    {
        shivam();
    }
    auto end = std::chrono::high_resolution_clock::now();
    //cout <<"\nExecution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds "<<"\n";
    return 0;
}