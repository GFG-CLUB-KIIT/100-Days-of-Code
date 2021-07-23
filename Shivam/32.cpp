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
    int y,w;
    cin>>y>>w;
    int maxi = max(y,w);
    int chance = 6 - maxi;
    chance++;
    if(chance == 1)
    {
        cout<<"1/6";
    }
    else if(chance == 2)
    {
        cout<<"1/3";
    }
    else if(chance == 3)
    {
        cout<<"1/2";
    }
    else if(chance == 4)
    {
        cout<<"2/3";
    }
    else if(chance == 5)
    {
        cout<<"5/6";
    }
    else if(chance == 6)
    {
        cout<<"1/1";
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