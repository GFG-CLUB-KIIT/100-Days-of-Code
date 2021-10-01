//https://www.hackerrank.com/challenges/flatland-space-stations/problem
//HackerRank Day-70

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    int max = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + m);

    if (m == n)
    {
        cout << 0;
    }
    else
    {
        int a = 0;
        int b = 0;
        for (int i = 0; i < n ; i++)
        {
            if (i == arr[b])
            {
                if (a > max)
                    max = a;
                a = 0;
                b++;
            }

            a++;
        }
        if(a>max)
        max = a;

        cout << (max+1)/2;
    }
    return 0;
}