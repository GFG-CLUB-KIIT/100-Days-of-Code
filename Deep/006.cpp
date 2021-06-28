/*
Problem - https://www.codechef.com/LTIME97C/problems/UNONE
Author - Abhinav Deep
Date - June 26, 2021
*/
#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int even[n];
    int odd[n];
    int a=0,b=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp%2){
            odd[a++] = temp;
        }
        else{
            even[b++] = temp;
        }
    }
    for(int i=0;i<b;i++){
        cout<<even[i]<<" ";
    }
    for(int i = 0;i<a;i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}