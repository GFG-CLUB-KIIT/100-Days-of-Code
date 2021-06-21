/*
Problem - https://codeforces.com/problemset/problem/1537/C
Author - Abhianv Deep
Date - June 21, 2021
*/

#include<iostream>
using namespace std;
typedef long long ll;
#include<vector>
#include<algorithm>
#include<limits.h>
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
    vector <int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    int minValue = INT_MAX;
    int minIndex = -1;
    for(int i = 0; i < n-1; i++){
        if( arr[i+1]-arr[i] <= minValue){
            minValue = arr[i+1]-arr[i];
            minIndex = i;
        }
    }
    cout<<arr[minIndex]<<" ";
    for(int i = minIndex + 2; i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0; i< minIndex;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[minIndex+1]<<endl;
    return;
}