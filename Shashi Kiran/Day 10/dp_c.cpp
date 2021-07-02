// Problem: C - Vacation
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_c
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

int n;
int ar[100005][3];
int dp[100005][3];
int run(int i,int j){
	if(i==n) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	int ans1 = ar[i][j] + run(i+1,(j+1)%3);
	int ans2 = ar[i][j] + run(i+1,(j+2)%3);
	int ans = max(ans1,ans2);
	return dp[i][j] = ans;
}

void solve(){
	fill(dp,-1);
  	cin>>n;
	f(i,n)
		f(j,3) cin>>ar[i][j];
	int ans = 0;
	for(int i=0;i<3;i++){
		ans = max(ans,run(0,i));
	}
	cout<<ans<<endl;
	
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