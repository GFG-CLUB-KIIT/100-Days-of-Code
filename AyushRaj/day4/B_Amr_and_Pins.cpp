// https://codeforces.com/contest/507/problem/B

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
    ll r, x, y, x1, y1, pos = 0;
    cin >> r >> x >> y >> x1 >> y1;
    ll z = sqrt((y1 - y) * (y1 - y) + (x1 - x) * (x1 - x));
    // deb(z);
    pos += (z / r / 2);
    // deb(pos);
    if (z * z < (y1 - y) * (y1 - y) + (x1 - x) * (x1 - x))
        pos++;
    else if (z % (r * 2) != 0)
        pos++;
    // deb(pos);
    cout << pos;
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
    // cin>>t;
    for (ll i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}