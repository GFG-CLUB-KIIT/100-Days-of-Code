// Problem: E - Sequence Matching
// Contest: AtCoder - AtCoder Beginner Contest 185
// URL: https://atcoder.jp/contests/abc185/tasks/abc185_e
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

int dp[1001][1001];
int a[1000],b[1000];
int n,m;
int lcs(int i,int j){
	if(i==n or j==m)
		return m+n-(i+j);
	if(dp[i][j]!=-1)
		return dp[i][j];
	if(a[i]==b[j]){
		dp[i][j] = lcs(i+1,j+1);
	}
	else{
		int ans1 = 1+lcs(i+1,j);
		int ans2 = 1+lcs(i,j+1);
		int ans3 = 1+lcs(i+1,j+1);
		int ans = min({ans1,ans2,ans3});
		dp[i][j]=ans;
	}
	return dp[i][j];
}

void solve(){
  	// int n,m;
  	fill(dp,-1);
  	cin>>n>>m;
  	f(i,n) cin>>a[i];
  	f(i,m) cin>>b[i];
  	cout<<lcs(0,0)<<endl;
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