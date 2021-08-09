//https://www.hackerrank.com/challenges/runningtime/problem
//HackerRank Day-49

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0;
    cin >> n;
    int arr[n];
    for(int i =0 ; i<n ; i++)
    cin >> arr[i];

    for(int i =0 ; i<n ; i++)
    {
        for(int j =i+1 ; j<n ; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                c++;
            }
        }
    }

    // for(int i =0 ; i<n ; i++)
    // cout <<  arr[i];

    cout << c;
return 0;
}