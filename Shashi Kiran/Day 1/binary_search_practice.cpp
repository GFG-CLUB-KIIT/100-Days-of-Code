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

bool isPossible(vll &ar,int mid,int d){
	vll v(d);
	f(i,d) v[i]=0;
	int j=0;
	for(int i=0;i<ar.size();i++){
		if(v[j]+ar[i]<=mid){
			v[j]+=ar[i];
		}else{
			i--;
			j++;
		}
		if(j==d and i!=ar.size()-1) return false;
	}
	return true;
}

void solve(){
  	int n;
  	cin>>n;
  	vll ar(n);
  	int s=0;
  	f(i,n) cin>>ar[i],s+=ar[i];	
  	int d;
  	cin>>d;
	int lo = 0,hi = s;
	int ans=lo;
	while(lo<=hi){
		int mid = lo + (hi-lo)/2;
		if(isPossible(ar,mid,d)){
			ans=mid;
			hi = mid-1;
		}else lo = mid+1;
	}
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