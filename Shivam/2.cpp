// https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
#include<bits/stdc++.h>
using namespace std;
int knapsack(int n , int capacity , int* value , int* weight , int** dp)
{
    if(n==0 || capacity==0)
    {
        return 0;
    }
    else
    {
        if(dp[n][capacity] != -1)
        {
            return dp[n][capacity];
        }
        int x = INT_MIN;
        if(weight[0] <= capacity)
        {
            x = knapsack(n - 1 , capacity - weight[0] , value + 1 , weight + 1 , dp) + value[0];
        }
        int y = knapsack(n - 1, capacity , value + 1, weight + 1 , dp);
        dp[n][capacity] = max(x,y);
        return dp[n][capacity];
    }
}
int main()
{
    int n,capacity;
    cin>>n>>capacity;
    int value[n];
    int weight[n];
    for(int i=0;i<n;i++)
    {
        cin>>value[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    int** dp = new int*[n + 1];
    for(int i=0;i<=n;i++)
    {
        dp[i] = new int[capacity + 1];
    }
    // int dp[n + 1][capacity + 1];
    // memset(dp , -1 , sizeof(dp));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=capacity;j++)
        {
            dp[i][j] = -1;
        }
    }
    cout<<knapsack(n , capacity , value , weight , dp);
    return 0;
}