// Problem: B. Alphabetical Strings
// Contest: Codeforces - Codeforces Round #731 (Div. 3)
// URL: https://codeforces.com/contest/1547/problem/B
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
    string s;
    cin>>s;
    int n = s.length();
    mll m;
	int pos=-1;
    f(i,s.length()){
    	if(s[i]=='a'){
    		pos=i;
    		break;
    	}
    }
    if(pos==-1){
    	no;
    	return;
    }
   	int i = pos,j = pos;
    char a = 'b';
    int ctr=1;
	while(ctr<s.length()){
		if(j!=n-1 and s[j+1]==a){
			j = j+1;
			a++;
			ctr++;
			continue;
		}
		if(i!=0 and s[i-1]==a){
			i = i-1;
			a++;
			ctr++;
			continue;
		}
		no;
		return;
	}
	yes;
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