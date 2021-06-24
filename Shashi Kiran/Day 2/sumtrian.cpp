#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<vector<int> > v;
    for(int i=0;i<n;i++){
        vector<int> v1;
        for(int j=0;j<=i;j++){
            int x;
            cin>>x;
            v1.pb(x);
        }
        v.pb(v1);
    }

    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            v[i][j]+=max(v[i+1][j],v[i+1][j+1]);
        }
    }
    cout<<v[0][0]<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}