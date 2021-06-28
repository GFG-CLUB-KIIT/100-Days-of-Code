// https://www.codechef.com/START5B/problems/SLPCYCLE

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
    int l,h;
    cin>>l>>h;

    string s;
    cin>>s;

    vi v;

    int ctr = 0;
    bool f = 0;
    f(i,l){
        while(s[i]=='0'){
            ctr++;
            i++;
            f=1;
        }
        if(f){
            v.pb(ctr);
            ctr=0;
        }
    }

    if(f==0){
        cout<<"NO\n";
        return;
    }

    rep(i,0,v.size()){
        // cerr<<h<<" "<<v[i]<<endl;
        if(h<=v[i]){
            cout<<"YES\n";
            return;
        }
        if(i==(int)v.size()-1 && h>v[i]){
            cout<<"NO\n";
            return;
        }
        if(2*(h-v[i])<=h){
            h=2*(h-v[i]);
        }
    }
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