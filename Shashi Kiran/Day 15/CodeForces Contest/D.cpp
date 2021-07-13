// Problem: D. Co-growing Sequence
// Contest: Codeforces - Codeforces Round #731 (Div. 3)
// URL: https://codeforces.com/contest/1547/problem/D
// Memory Limit: 512 MB
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

void solve(){
    int n;
    cin>>n;
    int ar[n];
    f(i,n) cin>>ar[i];
    vll ans;
    ans.pb(0);
    vll ar2;
    ar2.pb(ar[0]);
    f(i,n-1){
    	if((ar2[i] & ar[i+1])==ar2[i]){
    		ans.pb(0);
    		ar2.pb(ar[i+1]);
    	}else{
    		int x = ar2[i] | ar[i+1];
    		int y = ar2[i];
    		if(x>y){
	    		ar2.pb(x);
	    		ans.pb(x^ar[i+1]);
	    	}
	    	else{
	    		ar2.pb(ar2[i]);
	    		ans.pb(ar2[i]^ar[i+1]);
	    	}
    	}
    }
    f(i,n) cout<<ans[i]<<" ";
    ln;
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