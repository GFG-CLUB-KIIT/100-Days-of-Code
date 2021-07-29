//https://www.hackerrank.com/challenges/equality-in-a-array/problem
//HackerRank Day39

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int max = a[0], c = 1, maxi = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == max)
        {
            c++;
            if (c > maxi)
            {
                maxi = c;
            }
        }
        else
        {
            max = a[i];
            c = 1;
        }
    }
    cout << n - maxi << endl;
    return 0;
}