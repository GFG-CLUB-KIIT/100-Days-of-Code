// https://www.geeksforgeeks.org/gold-mine-problem/

#include <iostream>

using namespace std;

const int N = 1e4;

int arr[1000][1000];
int dp[N][N];

int gold(int i,int j,int n,int m){   
    if(j==m-1){
        return arr[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==0){
        dp[i][j] = arr[i][j] + max(gold(i+1,j+1,n,m),gold(i,j+1,n,m));
    }
    if(i==n-1){
        dp[i][j] = arr[i][j] + max(gold(i-1,j+1,n,m),gold(i,j+1,n,m));
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    dp[i][j] = arr[i][j] + max(gold(i+1,j+1,n,m),max(gold(i-1,j+1,n,m),gold(i,j+1,n,m)));
    return dp[i][j];
}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dp[i][j] = -1;
        }
    }

    for(int i=0;i<n;i++)
        ans = max(ans,gold(i,0,n,m));

    cout<<ans<<"\n";

    return 0;
}