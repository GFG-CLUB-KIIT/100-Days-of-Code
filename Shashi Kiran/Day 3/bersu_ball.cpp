// Problem: B. BerSU Ball
// Contest: Codeforces - Codeforces Round #277.5 (Div. 2)
// URL: https://codeforces.com/problemset/problem/489/B
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

int n,m;
int a[1001],b[1001];
int dp[101][101];
int fun(int i,int j){
	if(i==n or j==m){
		return 0;
	}
	if(dp[i][j]!=-1) 
		return dp[i][j];
		
	if(abs(a[i]-b[j])<=1){
		dp[i][j] = 1 + fun(i+1,j+1);
	}else{
		int ans1 = fun(i+1,j);
		int ans2 = fun(i,j+1);
		int ans = max(ans1,ans2);
		dp[i][j] = ans;
	}
	return dp[i][j];
}

void solve(){
	fill(dp,-1);
  	cin>>n;
  	f(i,n) cin>>a[i];
  	cin>>m;
  	f(i,m) cin>>b[i];
  	sort(a,a+n);
  	sort(b,b+m);
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