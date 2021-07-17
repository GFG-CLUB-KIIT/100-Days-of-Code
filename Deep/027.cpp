/*
Problem - https://codeforces.com/problemset/problem/1535/A
Author - Abhinav Deep
Date - July 17, 2021
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
    int arr[4], max1 =0, max2 =0;
    for(int i=0;i<4;i++){ 
        cin>>arr[i];
        if(arr[i] > arr[max1]){
            max1 = i;
        }
    }
    max2 = (max1+1)%4;
    for(int i=0;i<4;i++){
        if(i != max1 && arr[i] >= arr[max2]){
            max2 = i;
        }
    }
    for(int i=1;i<4;i++){
        if(arr[i] > arr[max1] && i != max1){
            max2 = i;
        }
    }
    if(max1+max2 == 1 || max1+max2 == 5){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    return;
}