// Problem: D - Knapsack 1
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_d
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
int n,w;
int ar[100005][2];
int dp[101][100005];
int fun(int i,int wt){
	// cout<<i<<" "<<wt<<endl;
	if(i==n or wt==w) return 0;
	if(wt>w) return INT_MIN;
	if(dp[i][wt]!=-1) return dp[i][wt];
	int ans1=0;
	if(wt+ar[i][0]<=w)
		ans1 = ar[i][1] + fun(i+1,wt+ar[i][0]);
 	int ans2 = fun(i+1,wt);
 	int ans = max(ans1,ans2);
 	return dp[i][wt] = ans;
}

void solve(){
  	cin>>n>>w;
  	fill(dp,-1);
	// int ar[n][2];
	for(int i=0;i<n;i++){
		cin>>ar[i][0]>>ar[i][1];
	}
	cout<<fun(0,0)<<endl;
	
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