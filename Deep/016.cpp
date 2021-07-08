/*
Problem - https://codeforces.com/problemset/problem/1515/A
Author - Abhinav Deep
Date - July 6,2021
*/

#include<iostream>
using namespace std;
void solve();
void swap(int &a,int &b){
    a= a+b;
    b= a-b;
    a= a-b;
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

void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int sum=0;
    for(int i = 0;i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    if(sum == k){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    sum = 0;
    for(int i=0;i<n;   ){
        if(sum+arr[i] == k){
            swap(arr[i],arr[i+1]);
        }
        else{
            cout<<arr[i]<<" ";
            sum+=arr[i];
            i++;
        }
    }
    cout<<"\n";
    return;
}