/*
Problem - https://codeforces.com/problemset/problem/1530/A
Author - Abhinav Deep
Date - July 18, 2021
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
    ll n;
    cin>>n;
    int max = 0;
    while(n){
        if(n%10 > max){
            max = n%10;
        }
        n /= 10;
    }
    cout<<max<<endl;
    return;
}