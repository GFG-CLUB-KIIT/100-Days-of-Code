// Problem: Spiderman and Jumping
// Contest: CodeChef - Practice(Extcontest)
// URL: https://www.codechef.com/problems/SPIDY2
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define vll             vector<int>
#define mll             map<int,int>
#define pll             pair<int,int>
#define vpll            vector<pair<int,int>>
#define pb              push_back
#define mp              make_pair
#define F               first
#define S               second
#define to_low(s)       transform(s.begin(), s.end(), s.begin(), ::tolower);//convert string to lowercase
#define to_up(s)        transform(s.begin(), s.end(), s.begin(), ::toupper);//convert string to uppercase
#define popcount        __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount      __builtin_popcountll
#define f(i,n)          for(int i=0;i<n;i++)
#define fin(i,c,n)      for(int i=c;i<n;i++)
#define fer(i,c,n)      for(int i=c;i>=n;i--)
#define fill(a, x)      memset(a, x, sizeof(a))
#define mod             1000000007
#define no              cout<<"NO\n"
#define yes             cout<<"YES\n"
#define ln              cout<<"\n";

bool isPow(int x){
	if(ceil(log2(x))==floor(log2(x))) return true;
	return false;
}
int n;
int ar[200001];
int dp[200001];
int jump(int j){
	if(j>=n-1) return 0;
	if(dp[j]!=-1) return dp[j];
	int ans = INT_MAX;
	for(int i=1;i+j<n;i*=2){
		ans = min(ans,abs(ar[i+j]-ar[j])+jump(i+j));
	}
	return dp[j] = ans;
}

void solve(){

    cin>>n;
    fill(dp,-1);
    f(i,n) cin>>ar[i];
    cout<<jump(0)<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}