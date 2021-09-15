//https://www.hackerrank.com/challenges/cavity-map/problem
//HackerRank Day-68

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j<n ; j++)
        {
            cin >> arr[i][j];
        }
        cout << "\n";
    }

    for(int i = 1 ; i<n-1 ; i++)
    {
        for(int j =1 ; j<n-1 ; j++)
        {
            if(arr[i][j]> arr[i-1][j] && arr[i][j] > arr[i][j-1] && arr[i][j]> arr[i+1][j] && arr[i][j] > arr[i][j+1])
            arr[i][j]= -100;

        }
    }

     for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j<n ; j++)
        {
            if(arr[i][j]==-100)
                cout << 'X';
            else
            cout << arr[i][j];
        }
        cout << "\n";
    }
return 0;
}