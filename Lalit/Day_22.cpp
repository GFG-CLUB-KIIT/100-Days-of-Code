// https://codeforces.com/gym/102267/problem/D

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    string ans;

    if (x == 1 || x == 2 || x == 3)
    {
        ll down = 3 - x;

        if (y <= 10)
        {
            while (down--)
            {
                ans += 'D';
            }
            while (y < 10)
            {
                ans += 'R';
                y++;
            }
        }
        else
        {
            while (down--)
            {
                ans += 'D';
            }
            while (y > 3)
            {
                ans += 'L';
                y--;
            }
        }
    }
    else if (x == 4 || x == 5 || x == 6 || x == 7)
    {
        ll up = x - 3;

        if (y <= 10)
        {
            while (up--)
            {
                ans += 'U';
            }
            while (y < 10)
            {
                ans += 'R';
                y++;
            }
        }
        else
        {
            while (up--)
            {
                ans += 'U';
            }
            while (y > 3)
            {
                ans += 'L';
                y--;
            }
        }
    }
    else if (x == 8 && (y != 6 && y != 7))
    {
        ll up = x - 3;

        if (y <= 10)
        {
            while (up--)
            {
                ans += 'U';
            }
            while (y < 10)
            {
                ans += 'R';
                y++;
            }
        }
        else
        {
            while (up--)
            {
                ans += 'U';
            }
            while (y > 3)
            {
                ans += 'L';
                y--;
            }
        }
    }
    else if (x == 8 && (y == 6 || y == 7))
    {
        ll down = 10 - x;
        ll left = y - 3;

        while (down--)
        {
            ans += 'D';
        }

        while (left--)
        {
            ans += 'L';
        }
    }
    else if (x == 11 || x == 12)
    {
        ll up = x - 11;

        while (up--)
        {
            ans += 'U';
        }

        if (y == 2)
        {
            ans += 'R';
            ans += 'U';
        }
        else if (y == 11)
        {
            ans += 'L';
            ans += 'U';
        }
        else if (y == 1)
        {
            ans += 'R';
            ans += 'R';
            ans += 'U';
        }
        else if (y == 12)
        {
            ans += 'L';
            ans += 'L';
            ans += 'U';
        }
        else if (y == 3 || y == 10)
        {
            ans += 'U';
        }
        else
        {
            ans += 'U';
            ll right = 10 - y;
            while (right--)
            {
                ans += 'R';
            }
        }
    }
    else if (x == 9)
    {
        if (y >= 4 && y <= 9)
        {
            ll right = 10 - y;
            ans += 'D';
            while (right--)
            {
                ans += 'R';
            }
        }
        if (y == 1)
        {
            ans += 'D';
            ans += 'D';
            ans += 'R';
            ans += 'R';
            ans += 'U';
        }
        if (y == 12)
        {
            ans += 'D';
            ans += 'D';
            ans += 'L';
            ans += 'L';
            ans += 'U';
        }
    }
    else if (x == 10)
    {
        if (y >= 4 && y <= 9)
        {
            ll right = 10 - y;
            while (right--)
            {
                ans += 'R';
            }
        }
        if (y == 1)
        {
            ans += 'D';
            ans += 'R';
            ans += 'R';
            ans += 'U';
        }
        if (y == 12)
        {
            ans += 'D';
            ans += 'L';
            ans += 'L';
            ans += 'U';
        }
    }

    cout << ans.length() << endl;
    cout << ans << endl;
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