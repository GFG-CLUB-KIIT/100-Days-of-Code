/*
Problem - https://codeforces.com/problemset/problem/1525/A
Author - Abhinav Deep
Date - June 22, 2021
*/

#include<iostream>
#include<algorithm>
using namespace std;
void solve();

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}

void solve(){
    int k;
    cin>>k;
    int gcd = __gcd(k,100-k);
    cout<< k/gcd + (100-k)/gcd <<endl;
    return;
}