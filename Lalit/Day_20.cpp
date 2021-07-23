// https://codeforces.com/contest/1337/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll x, n, m, xx, nn, mm;
    cin >> x >> n >> m;

    xx = x;
    nn = n;
    mm = m;

    while (x > 0)
    {
        if (n == 0)
        {
            break;
        }

        x = floor(x / 2) + 10;
        n--;
    }

    if (x <= 0)
    {
        cout << "YES" << endl;
        return;
    }

    while (x > 0)
    {
        if (m == 0)
        {
            break;
        }

        x -= 10;
        m--;
    }

    if (x <= 0)
    {
        cout << "YES" << endl;
        return;
    }

    while (xx > 0)
    {
        if (mm == 0)
        {
            break;
        }

        xx -= 10;
        mm--;
    }

    if (xx <= 0)
    {
        cout << "YES" << endl;
        return;
    }

    while (xx > 0)
    {
        if (nn == 0)
        {
            break;
        }

        xx = floor(xx / 2) + 10;
        nn--;
    }

    if (xx <= 0)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
