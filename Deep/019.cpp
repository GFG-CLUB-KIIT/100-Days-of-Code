/*
Problem - https://codeforces.com/problemset/problem/1509/A
Author - Abhinav Deep
Date - July 9, 2021
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
    int even[n], odd[n], a = 0, b = 0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp&1){
            odd[a++] = temp;
        }
        else{
            even[b++] = temp;
        }
    }
    for(int i=0;i<a;i++){
        cout<<odd[i]<<" ";
    }
    for(int i=0;i<b;i++){
        cout<<even[i]<<" ";
    }
    cout<<"\n";
    return;
}