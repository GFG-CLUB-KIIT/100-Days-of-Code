// Problem: C - Duodecim Ferra
// Contest: AtCoder - AtCoder Beginner Contest 185
// URL: https://atcoder.jp/contests/abc185/tasks/abc185_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
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

int dp[2001][15];
int fun(int l,int n){
	if(l<n) return 0;
	if(n==1) return 1;
	if(dp[l][n]!=-1) return dp[l][n];
	int res = 0;
	for(int i=1;i<l;i++){
		res = res + fun(l-i,n-1);
		dp[l][n] = res;
	}
	return res;
}

void solve(){
    int l;
    cin>>l;
    fill(dp,-1);
    cout<<fun(l,12)<<endl;
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