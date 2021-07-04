// Problem: E - Knapsack 2
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_e
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

struct Node{
	int value = -1;
};
int n,w;
int ar[101];
int br[101];
map<pll,Node> dp;
int fun(vpll &v,int i,int wt){
	// cout<<i<<" "<<wt<<endl;
	if(i==n or wt==w)  return 0;
	if(wt>w) return INT_MIN;
	if(dp[{i,wt}].value!=-1) return dp[{i,wt}].value;
	int ans1 = INT_MIN;
	if(wt+v[i].F<=w)
		ans1 = v[i].S + fun(v,i+1,wt+v[i].F);
	int ans2 = fun(v,i+1,wt);

	dp[{i,wt}].value  = max(ans1,ans2);
	// cout<<i<<" "<<wt<<" "<<dp[{i,wt}].value<<endl;
	return dp[{i,wt}].value;

}


void solve(){
    cin>>n>>w;
    vpll v;
    f(i,n){
		cin>>ar[i];
		cin>>br[i];
		v.pb({ar[i],br[i]});
    }
	cout<<fun(v,0,0)<<endl;
	dp.clear();
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