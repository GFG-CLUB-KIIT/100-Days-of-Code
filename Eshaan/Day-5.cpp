//https://codeforces.com/problemset/problem/1130/A
//Codeforces Day 5

#include<iostream>
using namespace std;
int main()
{
    int n,a[1001],pve=0,nve=0;
    cin>>n;

    int div=0;
    if(n%2 == 0){
        div = n/2;
    }
    else if( n%2 != 0){
        div = (n/2)+1;
    }

    for(int i=0; i<n; i++){
        cin>>a[i];
        if( a[i] > 0){
            pve++;
        }
        else if( a[i]  < 0 ){
            nve++;
        }
    }

    if( div <= pve ){
        cout<<1<<"\n";
    }
    else if( div <= nve){
        cout<<-1<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
    return 0;
}
