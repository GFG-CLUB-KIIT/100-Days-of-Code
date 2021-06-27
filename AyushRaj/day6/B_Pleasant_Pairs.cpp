// https://codeforces.com/contest/1541/problem/B

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
#define PI 3.141592653589793238462
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define gri greater<int>()
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
    int n;
    ll inp, c = 0;
    cin >> n;
    vector<pair<ll, ll>> v;
    // map<ll, ll> m;
    // vll v1(n), v2(n), v3;
    // map<ll, ll> m;
    rep(i, 0, n)
    {
        cin >> inp;
        // m[inp] = i + 1;
        // v1[i] = inp;

        v.push_back(make_pair(inp, i + 1));
        // v2[i] = i + 1;
        // p.first()
        // make_pair(inp, i + 1);
    }
    sort(all(v));
    // sort(all(v1));
    // sort(all(v2));
    for (ll i = 0; i < n; i++)
    {
        if (v[i].first * v[i + 1].first > 2 * n)
            break;
        for (ll j = i + 1; j < n; j++)
        {
            if (v[i].first * v[j].first == v[i].second + v[j].second && i != j)
            {
                // deb(v[i].first);
                // deb(v[j].first);
                // deb(v[i].ss);
                // deb(v[j].ss);
                c++;
            }
        }
    }
    cout << c << endl;
    // for (auto it : v)
    // {
    //     for (auto it2 : v)
    //     {
    //         if(v)
    //     }
    // }
    // for (ll i = 0; i < n; i++)
    // {
    //     for (ll j = i + 1; j < n; j++)
    //     // { // {
    //     //     //     if (v1[i] * v1[j] == v2[i] + v2[j])
    //     //     //         c++;
    //     //     if(m-)
    //     }
    // }
    // rep(i, 0, n)
    // {
    //     rep(j, i + 1, n)
    //     {
    //         if (m[i].ff =)
    //     }

    // }
    //     for (auto it1 : m)
    //         for (auto it1 = m.begin(); it1 != m.end(); it1++)
    //         // for(auto it1=m)
    //         {
    //             if (it1->first * (it1 + 1)->first > it1->second + it1->second + 1)
    //                 goto r;
    //             for (auto it2 : m)
    //             {
    //                 if (it1.first * it2.first == it1.second + it2.second)
    //                 {
    //                     c++;
    //                 }
    //             }
    //         }
    // r:
    // cout << c << endl;
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