// https://codeforces.com/contest/1520/problem/D
/******************************
     codificador10
*******************************/
#include <bits/stdc++.h>
using namespace std;
#include <string>
#define INF 1e18
#define ll long long int
#define ld long double
#define ull unsigned long long
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
    int n, inp;
    ll sum = 0;
    map<int, ll> m;
    cin >> n;

    rep(i, 0, n) cin >> inp, m.insert(make_pair(inp - i, 0)), m[inp - i]++;

    for (auto it : m)
        sum += it.second * (it.second - 1) / 2;
    cout << sum << endl;
}

/*--------------------------------------------------testcase--------------------------------------------*/

// int32_t main()
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.precision(numeric_limits<double>::max_digits10);

    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}