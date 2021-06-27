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
    int n;
    cin>>n;
    int arr[n];
    int hash[2*n+1];
    for(int i=0;i<=2*n;i++)
        hash[i] = 1e6;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]]=i+1;
    }
    int ans = 0;
    for(int i=3;i<2*n;i++){
        for(int j=1;j<=sqrt(i);j++){
            if(i%j==0 && i!=j*j){
                if(hash[j]+hash[i/j]==i){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
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