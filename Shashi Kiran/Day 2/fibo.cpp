#include<bits/stdc++.h>
using namespace std;
int fibo(int,int []);
int main(){
    int n;
    cin>>n;
    int ar[10000];
    memset(ar,-1,sizeof(ar));
    cout<<fibo(n,ar);
    
}

int fibo(int n, int *ar){
    if(ar[n]!=-1){
        return ar[n];
    }
    if(n<=2){
        return 1;
    }
    ar[n]=fibo(n-1,ar)+fibo(n-2,ar);
    return ar[n];
    
}