/*
Problem - https://codeforces.com/contest/1550/problem/A
Author - Abhinav Deep
Date - July 14, 2021
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
    int s;
    cin>>s;
    int c=0;
    int sum = 0, x = 1;
    while(x <= s-sum){
        sum += x;
        x += 2;
        c++;
    }
    if(sum < s){
        cout<<c+1<<"\n";
        return;
    }
    cout<<c<<"\n";
    return;
}