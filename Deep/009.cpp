/*
Problem - https://codeforces.com/problemset/problem/1519/A
Author - Abhinav Deep
Date - June 29, 2021
*/

#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
void solve();

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    ll r,b,d;
    cin>>r>>b>>d;
    ll Max = max(r,b);
    ll Min = min(r,b);
    if(Max/(d+1) < Min){
        cout<<"YES\n";
        return;
    }
    if(Max/(d+1) == Min && Max%(d+1) == 0){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}