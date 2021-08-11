//https://www.hackerrank.com/challenges/countingsort2/problem
//HackerRank Day-51

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum[100] = {0};
    sort(arr,arr+n);

    // for (int i = 0; i < 100; i++)
    // {
    //     int c = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[j] == i)
    //             c++;
    //     }
    //     sum[i] = c;
    // }

    // sort(sum,sum+100);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}