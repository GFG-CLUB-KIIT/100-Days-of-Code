// https://www.codechef.com/START5B/problems/CHEFQUER
//Brute Force Sol(n). Optimised solution needs Fenwick Trees / Binary Indexed Trees.

#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

#define f(i,n) for(int i=0;i<n;i++)
#define rep(i,s,n) for(int i=s;i<n;i++)
#define fm(it,mp) for(auto it=mp.begin();it!=mp.end();it++)
#define pb push_back
#define fill(a, x) memset(a, x, sizeof(a))
#define MP make_pair
#define F first
#define S second
#define vi vector<int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define mi map<int,int>

void solve(int tests){
    int n,q;
    cin>>n>>q;

    int arr[n];

    f(i,n) cin>>arr[i];

    while(q--){
        int a;
        cin>>a;

        if(a==1){
            int l,r,x;
            cin>>l>>r>>x;

            rep(i,l-1,r){
                cerr<<arr[i]<<" "<<(x+i-l+1)*(x+i-l+1)<<endl;
                arr[i]+=(x+i-l+1)*(x+i-l+1);
            }
        }
        else{
            int m;
            cin>>m;
            cout<<arr[--m]<<endl;
        }
    }
}

signed main(){
    boost

    int tests = 1;
    // cin >> tests;

    for(int i=1;i<=tests;i++){
        solve(i);
    }

    return 0;
}