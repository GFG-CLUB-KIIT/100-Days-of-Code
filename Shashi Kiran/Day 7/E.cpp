// Problem: E. Two Platforms
// Contest: Codeforces - Codeforces Round #667 (Div. 3)
// URL: https://codeforces.com/contest/1409/problem/E
// Memory Limit: 256 MB
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

int pref[200005];
int dp[200005][3];
int N;
vpll v;
int k;
int fun(int x,int p){
	// cout<<x<<" "<<p<<endl;
	if(x==N+1 or p==0) return 0;
	if(dp[x][p]!=-1) return dp[x][p];
	int end_of_plat = min(v[x-1].F + k,v[N-1].F);
	int lo = 0,hi = N-1;
	int ans = lo;
	while(lo<=hi){
		int mid = lo+(hi-lo)/2;
		if(v[mid].F<=end_of_plat) ans=mid,lo = mid+1;
		if(v[mid].F>end_of_plat) hi = mid-1;
	}
	ans++;
	int score = pref[ans] - pref[x-1];
	int res = max(score + fun(ans+1,p-1),fun(x+1,p));
	return dp[x][p] = res;
}

void solve(){
	// fill(dp,-1);
    int n;
    cin>>n>>k;
    int ar[n];
    int br[n];
    f(i,n) cin>>ar[i];
    f(i,n) cin>>br[i];
    mll m;
    f(i,n) m[ar[i]]++;
	for(auto i:m) v.pb({i.F,i.S});
	sort(v.begin(),v.end());
		
	pref[0] = 0;
	N = v.size();
	f(i,N) pref[i+1] = pref[i] + v[i].S;
	f(i,N+1) f(j,3) dp[i][j]=-1;
	
	cout<<fun(1,2)<<endl;
	
	f(i,N) pref[i]=0;
	v.clear();
}

signed main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}