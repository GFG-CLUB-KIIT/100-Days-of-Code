/*
Problem - https://codeforces.com/contest/1547/problem/A
Author - Abhinav Deep
Date - July 10, 2021
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
    int Ax,Ay,Bx,By,Fx,Fy;
    cin>>Ax>>Ay>>Bx>>By>>Fx>>Fy;
    int dist =0;
    if(Ax == Bx && Bx == Fx){
        if((Ay > Fy  && Fy > By) || (Ay < Fy && Fy < By)){
            dist = 2;
        }
    }
    else if(Ay == By && By == Fy){
        if((Ax > Fx  && Fx > Bx) || (Ax < Fx && Fx < Bx)){
            dist = 2;
        }
    }
    else
        dist =0;
    dist += abs(Ax-Bx) + abs(Ay-By);
    cout<<dist<<" ";
    return;
}