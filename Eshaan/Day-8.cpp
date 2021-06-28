/*
problem : https://codeforces.com/problemset/problem/709/A
Codeforces
Date : 28 june 2021
*/

#include<iostream>
using namespace std;

int main()
{
    int n, b, d, c = 0, e = 0;
    cin >> n >> b >> d;

    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        if (a[i] <= b)
        {
            c += a[i];

            if (c > d)
            {
                e++;
                c=0;
            }
        }
    }
    cout<<e;
}