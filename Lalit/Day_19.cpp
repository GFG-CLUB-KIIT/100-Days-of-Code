// https://codeforces.com/contest/1530/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll mat[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1)
            {
                if (j % 2 == 0)
                {
                    mat[i][j] = 1;
                }
                else
                {
                    mat[i][j] = 0;
                }
                continue;
            }
            if (j == 0 || j == m - 1)
            {
                // if(j==m-1 && mat[i-1][j] != 1 && mat[i-1][j-1] != 1 && mat[i][j-1] != 1)
                // {
                //     mat[i][j] = 1;
                // }
                // else
                // {
                //     mat[i][j] = 0;
                // }
                if (i != n - 2 && i != 1 && i % 2 == 0)
                {
                    mat[i][j] = 1;
                }
                else
                {
                    mat[i][j] = 0;
                }
                continue;
            }
            // if(j!=0 && j!=m-1)
            // {
            //     if(mat[i-1][j] != 1 && mat[i-1][j-1] != 1 && mat[i-1][j+1] != 1 && mat[i][j-1] != 1 && mat[i][j+1] != 1)
            //     {
            //         mat[i][j] = 1;
            //     }
            //     else
            //     {
            //         mat[i][j] = 0;
            //     }
            // }
            mat[i][j] = 0;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }

    cout << endl;
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
