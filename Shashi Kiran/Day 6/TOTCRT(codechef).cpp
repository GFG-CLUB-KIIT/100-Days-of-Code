// Problem: Total Correct Submissions
// Contest: CodeChef - June CodeChef Starters 2021 Division 2 (Unrated)
// URL: https://www.codechef.com/START5B/problems/TOTCRT
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

void solve(){
    int n;
    cin>>n;
    int n1 = n;
    map<string,int> m;
    while(n1--){
    	string s;
    	int x;
    	cin>>s>>x;
    	m[s]+=x;
    }
    n1 = n;
    while(n1--){
    	string s;
    	int x;
    	cin>>s>>x;
    	m[s]+=x;
    }
    n1 = n;
    while(n1--){
    	string s;
    	int x;
    	cin>>s>>x;
    	m[s]+=x;
    }
    vll v;
	for(auto i:m){
		v.pb(i.S);
	}
	sort(v.begin(),v.end());
	f(i,v.size()) cout<<v[i]<<" ";
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