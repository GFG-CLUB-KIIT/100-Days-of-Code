// https://www.geeksforgeeks.org/tiling-problem/

#include <iostream>

using namespace std;

const int N=1e5;

int dp[N];

int til(int n){
    if(n<=2){
        return n;
    }

    if(dp[n]!=-1)
        return dp[n];

    dp[n] = til(n-1) + til(n-2);

    return dp[n];
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<N;i++){
        dp[i] = -1;
    }

    cout<<til(n)<<endl;

    return 0;
}