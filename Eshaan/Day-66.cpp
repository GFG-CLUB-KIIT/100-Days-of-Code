//https://www.hackerrank.com/challenges/picking-numbers/problem
//HackerRank Day-66


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int cou = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] <= 1)
            {
                // cout << i << " and " << j;
                cou++;
            }
        }
        if (max < cou)
            max = cou;
    }

    cout << max;
    return 0;
}