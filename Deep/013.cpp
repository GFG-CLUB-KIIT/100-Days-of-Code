/*
Problem - https://codeforces.com/contest/1542/problem/A
Author - Abhinav Deep
Date - July 3, 2021
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
    int n;
    cin>>n;
    int temp,count=0;
    for(int i = 0; i<n*2; i++){
        cin>>temp;
        if(temp&1){
            count++;
        }
    }
    if(count == n){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}