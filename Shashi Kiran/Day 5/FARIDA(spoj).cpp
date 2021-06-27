// Problem: Princess Farida
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/FARIDA/
// Memory Limit: 1536 MB
// Time Limit: 1237 ms
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
int ar[100001];
int dp[200002];
int monster(int i){
	if(i>=n) return 0;
	if(dp[i]!=-1) return dp[i];
	int ans1 = monster(i+1);
	int ans2 = ar[i] + monster(i+2);
	int ans = max(ans1,ans2);
	dp[i] = ans;
	return ans;
}

void solve(int t){
    cin>>n;
    fill(dp,-1);
    f(i,n) cin>>ar[i];
    cout<<"Case "<<t<<": "<<monster(0)<<endl;
    
}	

signed main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;int ctr=1;
    while(t--){
        solve(ctr);
        ctr++;
    }
    return 0;
}