//https://www.hackerrank.com/challenges/minimum-distances/problem
//HackerRank Day-48
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int c, a = 0;
    int min = n + 1;
    for (int i = 0; i < n; i++)
    {
        c = -1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                c = j - i;
                a++;
               // cout <<"haa" << endl;
            }
        }
        if (c < min && c > 0)
            min = c;
    }
    if (a > 0)
    {
        //cout << "A " << a << endl;
        cout << min;
    }
    else
        cout << -1;
    return 0;
}