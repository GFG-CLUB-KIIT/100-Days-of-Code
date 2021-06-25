// Problem: C. Great Graphs
// Contest: Codeforces - Codeforces Round #728 (Div. 2)
// URL: https://codeforces.com/contest/1541/problem/C
// Memory Limit: 256 MB
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
    if(n<=2){
    	cout<<0<<endl;
    	return;
    }
    sort(ar,ar+n);
    int s=0;
    vector<int> arr(n);
    f(i,n) arr[i]=0;
	for(int i=1;i<n;i++){
		s+=ar[i]-ar[i-1];
		arr[i-1] = ar[i]-ar[i-1];
	}
	arr[n-1] = 0;
	reverse(arr.begin(),arr.end());
	fin(i,1,n) arr[i] = arr[i] + arr[i-1];
	vll arr2 = arr;
	fin(i,1,n) arr[i] = arr[i] + arr[i-1];
	int ans=0;
	int x = arr[n-1];
	int cur=0;
	for(int i=1;i<n;i++){
		ans+=(x-arr[i-1])-(cur*(n-i));
		cur=arr2[i];
	}
	cout<<-1*(ans-s)<<endl;

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