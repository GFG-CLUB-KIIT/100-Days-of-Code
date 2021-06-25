/*
Problem - https://www.codechef.com/problems/TWINGFT
Author - Abhinav Deep
Date - June 25, 2021
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
    return 0;
}

void solve(){
    int n,k;
    cin>>n>>k;
    vector <ll> gifts;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        gifts.push_back(temp);
    }
    sort(gifts.begin(), gifts.end());
    ll A = 0, B=0;
    int rear = n-1;
    for(int i = 0;i<k;i++){
        A += gifts[rear];
        B += gifts[rear-1];
        rear -= 2;
    }
    B += gifts[rear];
    if(A>B)cout<<A<<endl;
    else cout<<B<<endl;
    return;
}