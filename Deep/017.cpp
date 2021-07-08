/*
Problem - https://codeforces.com/contest/1543/problem/A
Author - Abhinav Deep
Date - July 7, 2021
*/

#include<iostream>
using namespace std;
typedef long long ll;
void solve();

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a == b){
        cout<<"0 0\n";
        return;
    }
    ll diff = abs(a-b);
    ll moves = min(b%diff, diff -b%diff);
    cout<<diff<<" "<<moves<<"\n";
    return;
}