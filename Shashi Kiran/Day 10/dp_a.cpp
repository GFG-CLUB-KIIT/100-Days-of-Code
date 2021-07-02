// Problem: A - Frog 1
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_a
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

int dp[200005];
int ar[200005];
int n;
int sum(int i){
	// cout<<i<<endl;
	if(i>=n-1) return 0;
	if(dp[i]!=-1) return dp[i];
	int ans1 = INT_MAX,ans2 = INT_MAX;
	if(i<n-2)
		ans2 = abs(ar[i]-ar[i+2]) + sum(i+2);
	if(i<n-1)
		ans1 = abs(ar[i]-ar[i+1]) + sum(i+1);
	int ans = min(ans1,ans2);
	return dp[i] = ans;
}

void solve(){
	fill(dp,-1);

  	cin>>n;
  	f(i,n) cin>>ar[i];
  	cout<<sum(0);
  	
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