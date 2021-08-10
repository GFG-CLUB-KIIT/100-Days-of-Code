//https://www.hackerrank.com/challenges/countingsort1/problem
//HackerRank Day-50

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

    for (int i = 0; i < 100; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
                c++;
        }
        sum[i] = c;
    }

    for (int i = 0; i < 100; i++)
        cout << sum[i] << " ";

    return 0;
}