// Problem: C. Pair Programming
// Contest: Codeforces - Codeforces Round #731 (Div. 3)
// URL: https://codeforces.com/contest/1547/problem/C
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
    int k1,n,m;
    cin>>k1>>n>>m;
    int ar1[n];
    f(i,n) cin>>ar1[i];
    int ar2[m];
    f(i,m) cin>>ar2[i];
    int maxp = k1;
    int p=0;
    vll v;
    f(i,n){
    	if(ar1[i]!=0) v.pb(ar1[i]);
    	maxp = max(maxp,ar1[i]);
    	if(ar1[i]==0) p++;
    }
    f(i,m){
    	if(ar2[i]!=0) v.pb(ar2[i]);
    	maxp = max(maxp,ar2[i]);
    	if(ar2[i]==0) p++;
    }
    if(k1+p<maxp){
    	cout<<-1<<endl;
    	return;
    }else{
    	vll ans(n+m);
    	int j=0;
    	int k=0;
    	int mp = k1;
    	f(i,n+m){
			if(j<n and ar1[j]==0) {
				ans[i]=0;
				j++;
				mp++;
			}
			else if(k<m and ar2[k]==0){
				ans[i]=0;
				k++;
				mp++;
			}
			else if(j<n and k<m){
				if(ar1[j]<=ar2[k]){
					if(ar1[j]<=mp) ans[i]=ar1[j],j++;
					else{
						cout<<-1<<endl;
						return;
					}
				}
				else{
					if(ar2[k]<=mp) ans[i]=ar2[k],k++;
					else{
						cout<<-1<<endl;
						return;
					}
				}
			}else{
				if(j==n){
					if(ar2[k]<=mp) ans[i]=ar2[k],k++;
					else{
						cout<<-1<<endl;
						return;
					}
				}
				else if(k==m){
					if(ar1[j]<=mp) ans[i]=ar1[j],j++;
					else{
						cout<<-1<<endl;
						return;
					}
				}
			}
    	}
    	f(i,n+m){
    		cout<<ans[i]<<" ";
    	}
    	ln;
    }
    
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