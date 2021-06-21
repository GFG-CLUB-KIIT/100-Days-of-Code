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

void solve()
{
    int n, q;
    int c, d;
    cin >> n >> q;
    int a[n];
    string s;
    cin >> s;
    rep(i, 0, s.size())
    {
        a[i] = (s[i] - 96);
        if (i > 0)
            a[i] += a[i - 1];
    }
    // cout << a[0] << " " << a[1];

    while (q--)
    {
        ll sum = 0;
        cin >> c >> d;
        // rep(i, c - 1, d)
        if (c > 1)
            sum += a[d - 1] - a[c - 2];
        else
            sum += a[d - 1];

        cout << sum << endl;
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