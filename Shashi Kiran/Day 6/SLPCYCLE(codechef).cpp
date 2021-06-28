// Problem: Sleep Cycle
// Contest: CodeChef - June CodeChef Starters 2021 Division 2 (Unrated)
// URL: https://www.codechef.com/START5B/problems/SLPCYCLE
// Memory Limit: 256 MB
// Time Limit: 500 ms
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
    int l,h;
    cin>>l>>h;
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.length();){
    	int ctr=0;
    	while(s[i]=='0'){
    		ctr++;
    		i++;	
    	}
    	if(ctr==0) i++;
    	else v.pb(ctr);
    }
    if(v.size()==0){
    	no;
    	return;
    }
    for(int i=0;i<v.size();i++){
    	int x = (h-v[i])*2;
    	if(x<=h){
	    	h=x;
	    	if(x<=0){
	    		yes;
	    		return;
	    	}
	    }
    }
    no;
    return;
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