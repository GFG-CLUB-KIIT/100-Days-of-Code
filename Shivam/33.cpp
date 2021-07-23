#include<bits/stdc++.h>
#define mod 1e9+7
#define modulo 998244353
using namespace std;

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
    int n;
    cin>>n;
    unordered_map<string , int> map;
    while(n--)
    {
        string s;
        cin>>s;
        if(map.find(s)!=map.end())
        {
            cout<<s<<map[s]<<"\n";
        }
        else 
        {
            cout<<"OK\n";
        }
        ++map[s];
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
    for(ll i=1;i<=t;i++)
    {
        shivam();
    }
    auto end = std::chrono::high_resolution_clock::now();
    //cout <<"\nExecution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds "<<"\n";
    return 0;
}