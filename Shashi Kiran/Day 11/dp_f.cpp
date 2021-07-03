// Problem: F - LCS
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_f
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


string ans;
int dp[5000][5000];
int fun(string &s, string &t, int i,int j,string temp){
	// cout<<i<<" "<<j<<endl;
	if(i==s.length() or j==t.length()){
		if(temp.length()>ans.length())
			ans = temp;
		return 0;
	}
	// if(dp[i][j]!=-1) return dp[i][j];
	int ans;
	if(s[i]==t[j]){
		temp+=s[i];
		ans = 1 + fun(s,t,i+1,j+1,temp);
		temp.pop_back();
	}else{
		int ans1 = fun(s,t,i+1,j,temp);
		int ans2 = fun(s,t,i,j+1,temp);
		ans = max(ans1,ans2);
	}
	return dp[i][j] = ans;
}

void solve(){
	fill(dp,-1);
  	string s;
  	string t;
  	cin>>s>>t; 
	fun(s,t,0,0,"") ;
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