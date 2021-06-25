// https : //codeforces.com/contest/1497/problem/B

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
#define gri greater<int>()
#define PI 3.141592653589793238462
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); //convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  //convert string to uppercase
#define deb(x) cout << #x << ' ' << x << endl;
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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

/*------------------------------------------------SOLVE----------------------------------------------*/

void solve()
{
    int n, m;
    ll inp, c = 0;
    cin >> n >> m;
    map<ll, ll> mpr;
    rep(i, 0, n) cin >> inp, mpr[inp % m]++;

    for (auto it : mpr)
    {
        if (it.first == 0)
            c++;
        else if (mpr.count(m - it.first) == 0)
            c += it.second;

        else if (m - it.first == it.first)
            c++;
        else if (m - it.first > it.first)
        {
            if (abs(mpr[m - it.first] - it.second) <= 1)
                c++;

            else if (abs(mpr[m - it.first] - it.second) > 1)
                c++, c += abs(mpr[m - it.first] - it.second) - 1;
        }
    }
    cout << c << endl;
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
        //cout<<'Case #'<<i<<': ';
        solve();
    }
    return 0;
}