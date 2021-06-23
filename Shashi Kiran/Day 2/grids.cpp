#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll grid_travel(ll, ll, int ar[][100] );
int main(){
    ll m,n;
    cin>>m>>n;
    // int len=INT_MAX;
    // int ar[len];
    // map<string,ll> ar;
    int ar[100][100]={0};
    // memset(ar,-1,sizeof(ar));
    cout<<grid_travel(m,n,ar);
    
    // cout<<s<<endl;
}

ll grid_travel(ll m,ll n, int ar[][100]){
    // are the args in the memo
    // stringstream ss;
    // stringstream ss2;
    // string s1,s2;
    // ss<<m;
    // ss>>s1;
    // ss2<<n;
    // ss2>>s2;
    // string key = s1 + "," + s2;
    // cout<<key<<" "<<ar[key]<<endl;
    if(m==1 && n==1){
        return 1;
    }
    if(m==0 || n==0){
        return 0;
    }
    if(ar[m][n]!=0){
        return ar[m][n];
    }
    
    ar[m][n] = grid_travel(m-1,n,ar) + grid_travel(m,n-1,ar); 
    // ar[key]++;
    return ar[m][n];
}