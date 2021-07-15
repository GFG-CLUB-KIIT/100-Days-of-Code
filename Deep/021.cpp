/*
Problem - https://codeforces.com/contest/1546/problem/B
Author - Abhinav Deep
Date - July 11, 2021
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
void solve();

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    cout<<flush;
    return 0;
}

void solve(){
    int n,m;
    cin>>n>>m;
    char X[m] = {0};
    for(int i = 0; i < (n*2)-1; i++){
        char str[m];
        cin>>str;
        for(int j = 0; j < m; j++){
            char temp = str[j];
            X[j] = X[j] ^ temp;
        }
    }
    for(int j=0; j<m;j++){
        cout<<(char)X[j];
    }
    cout<<"\n";
    return;
}