//https://www.hackerrank.com/challenges/electronics-shop/problem
//HackerRank Day-40

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, n, m;
    cin >> b >> n >> m;
    //int mx=max(n,m);
    int ke[n];
    int dr[m];
    int sum = 0;

    //keyboard
    for (int i = 0; i < n; i++)
        cin >> ke[i];

    //drive
    for (int i = 0; i < m; i++)
        cin >> dr[i];
    int max = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = ke[i] + dr[j];
            if (max < sum && sum <= b)
                max = sum;
        }
    }

    cout << max;
    return 0;
}