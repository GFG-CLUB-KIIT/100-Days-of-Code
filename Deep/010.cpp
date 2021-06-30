/*
Problem - https://codeforces.com/problemset/problem/1514/B
Author - Abhinav Deep
Date - June 30, 2021
*/

#include<iostream>
using namespace std;
void solve();
#define x 1000000007 

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    int n,k;
    cin>>n>>k;
    long long product = 1;
    for(int i=0; i<k;i++){
        product = (product*n)%x; 
    }
    cout<<product<<"\n";
    return;
}