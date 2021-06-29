// Problem: D. Flowers
// Contest: Codeforces - Codeforces Round #271 (Div. 2)
// URL: https://codeforces.com/problemset/problem/474/D
// Memory Limit: 256 MB
// Time Limit: 1500 ms
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

int dp[100005];
int K;
int fun(int i){

	if(i==0) return 1;
	if(i<0) return 0;
	
	if(dp[i]!=-1) return dp[i];

	int	ans1 = fun(i-K);
	int ans2 = fun(i-1);
	int ans = (ans1+ans2)%mod;
	return dp[i] = ans;
}

void solve(){
    int n,k;
    cin>>n>>k;
    K=k;
    fill(dp,-1);
    int pref[200002];
    fill(pref,0);
    pref[0] = 0;
    fin(i,1,100004) pref[i] = (pref[i-1] + fun(i))%mod;
    while(n--){
    	int a,b;
    	cin>>a>>b;
    	cout<<(pref[b] - pref[a-1] + mod)%mod<<endl;
    }
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