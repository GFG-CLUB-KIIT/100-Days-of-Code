// https://www.codechef.com/LTIME97B/problems/UNONE

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
    int n;
    cin>>n;

    int arr[n];

    f(i,n)cin>>arr[i];

    int k = 0;
    f(i,n){
        if(!(arr[i]&1)){
            swap(arr[k],arr[i]);
            k++;
        }
    }

    f(i,n){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

signed main(){
    boost

    int tests = 1;
    cin >> tests;

    for(int i=1;i<=tests;i++){
        solve(i);
    }

    return 0;
}