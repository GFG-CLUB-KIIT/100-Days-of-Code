// Problem: Philosophers Stone
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/BYTESM2/
// Memory Limit: 1536 MB
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
int ar[500][500];
int dp[500][500];
int n,m;
int stones(int i,int j){
	if(j<0 or j>=m) 
		return 0;
		
	if(i==n-1) 
		return ar[i][j];
		
	if(dp[i][j]!=-1) 
		return dp[i][j];
		
	int ans1 = stones(i+1,j);
	int ans2 = stones(i+1,j-1);
	int ans3 = stones(i+1,j+1);
	
	int ans = ar[i][j] + max({ans1,ans2,ans3});
	return dp[i][j] = ans;
}

void solve(){
	int h,w;
	cin>>h>>w;
	n=h,m=w;
	fill(dp,-1);
	f(i,h)
		f(j,w) cin>>ar[i][j];
	int ans = 0;
	for(int i=0;i<w;i++){
		ans = max(ans,stones(0,i));
	}
	cout<<ans<<endl;
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