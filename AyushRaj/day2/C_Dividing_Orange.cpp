// https://codeforces.com/problemset/problem/244/As

/******************************
     codificador10
*******************************/
#include <bits/stdc++.h>
using namespace std;
#include <string>
#define INF 1e18
#define ll long long int
#define ld long double
typedef unsigned long long ull;
#define mod 1000000007
#define modulo 998244353
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793238462
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = b - 1; i >= a; i--)
template <typename T>
T max(T a, T b, T c)
{
    return max(a, max(b, c));
}

template <typename T>
T min(T a, T b, T c)
{
    return min(a, min(b, c));
}

/*------------------------------------------------SOLVE----------------------------------------------*/

// void solve()
// {
//     int n, k, inp;
//     cin >> n >> k;
//     vector<int> v(901);
//     // vector<int> v(901);
//     rep(i, 0, 901) v[i] = i;
//     vector<int> v2;
//     v2.push_back(0);
//     rep(i, 0, k)
//     {
//         cin >> inp;
//         v.push_back(inp);
//     }

//     // rep(i, 1, k + 1)
//     // {
//     //     cout << v[i] << " ";

//     //     rep(j, 1, n * k)
//     //     {
//     //         if (j != v[i])
//     //     }
//     // }
//     int flag = 0;
//     int l = 1;
//     rep(i, 1, k + 1)
//     {

//         cout << v2[i] << " ";
//         rep(j, l, n * k + 1)
//         {
//             rep(p, i + 1, v2.size())
//             {
//                 if (v2[p] != j)
//                     flag = 1;
//                 else
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }

//             if (flag)
//                 cout << j << " ";
//         }
//         cout << endl;
//         // rep(j, 0, )
//     }
// }

void solve()
{
    int n, k, inp, flag = 0;
    cin >> n >> k;
    int z = n * k;
    vector<int> v;
    // v.push_back(0);
    rep(i, 0, k) cin >> inp, v.push_back(inp);

    for (int i = 0; i < k; i++)
    // while (k--)
    {
        // flag = 1;

        cout << v[i] << " ";
        // while (n--)
        for (int j = 1; j < n; j++)
        {
        r:
            for (int l = 0; l < k; l++)
            {
                if (z == v[l])
                {
                    // flag = 0;
                    z--;
                    goto r;
                }
            }

            // if (flag)
            // {
            cout << z << " ";
            z--;
            // }
        }
        cout << endl;
    }
}
/*--------------------------------------------------testcase--------------------------------------------*/

// int32_t main()
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin>>t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}