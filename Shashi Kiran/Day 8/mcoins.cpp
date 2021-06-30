// Problem: Coins Game
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/MCOINS/en/
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

int k,l;
int dp[1000006];
int play(int n){
	if(n==0){
		return 0;
	}
	if(dp[n]!=-1) return dp[n];
	int ans = 0;
	ans |= !(play(n-1));
	if(n>=k)
		ans|= !(play(n-k));
	if(n>=l)
		ans|= !(play(n-l));
	dp[n] = ans;
	return ans;
}

void solve(){
    int m;
    cin>>k>>l>>m;
    fill(dp,-1);
    string s = "BA";
    while(m--){
    	int n;
    	cin>>n;
		cout<<s[play(n)];
    }
    ln;
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