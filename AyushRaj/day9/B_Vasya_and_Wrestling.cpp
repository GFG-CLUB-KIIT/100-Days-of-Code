// https : //codeforces.com/contest/493/problem/B

/******************************
     codificador10
*******************************/
#include <bits/stdc++.h>
using namespace std;
#include <string>
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
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
#define nline '\n'
#define mp make_pair
#define ff first
#define ss second
#define gri greater<int>()
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = b - 1; i >= a; i--)
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}
//void read_input_from_file()
//{
//#ifndef ONLINE_JUDGE
//freopen("input_file.txt", "r", stdin);
//freopen("output_file.txt", "w", stdout);
//#endif
//}
#define debug(x) cout << #x << " ", _print(x), cout << endl;
/*------------------------------------------------debug----------------------------------------------*/
void _print(ll t) { cout << t; }
void _print(int t) { cout << t; }
void _print(string t) { cout << t; }
void _print(char t) { cout << t; }
void _print(ld t) { cout << t; }
void _print(double t) { cout << t; }
void _print(ull t) { cout << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cout << "{", _print(p.ff), cout << ",", _print(p.ss), cout << "}";
}
template <class T>
void _print(vector<T> v)
{
    cout << "[ ";
    for (T i : v)
        _print(i), cout << " ";
    cout << "]";
}
template <class T>
void _print(set<T> v)
{
    cout << "[ ";
    for (T i : v)
        _print(i), cout << " ";
    cout << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cout << "[ ";
    for (T i : v)
        _print(i), cout << " ";
    cout << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cout << "[ ";
    for (auto i : v)
        _print(i), cout << " ";
    cout << "]";
}

/*------------------------------------------------SOLVE----------------------------------------------*/

void solve()
{

    int n, r;
    cin >> n;
    r = n;
    vll v1, v2;
    ll inp, c1 = 0, c2 = 0;
    // ll s1, s2;
    string first = "", second = "", s = "first";
    while (r--)
    {
        cin >> inp;
        if (inp < 0)
            // second += to_string(abs(inp)), c2 += abs(inp);
            v2.pb(abs(inp)), c2 += abs(inp);
        else
            v1.pb(abs(inp)), c1 += abs(inp);
        // first += to_string(abs(inp)), c1 += abs(inp);
        if (r == 0 && inp < 0)
            s = "second";
    }
    // debug(first);
    // debug(second);
    // debug(c1);
    // debug(c2);
    if (c1 > c2)
        cout << "first";
    else if (c1 < c2)
        cout
            << "second";
    else if (c1 == c2)
    {

        rep(i, 0, max(v1.size(), v2.size()))
        {
            if (v1[i] > v2[i])
            {
                cout << "first";
                return;
            }
            else if (v1[i] < v2[i])
            {
                cout << "second";
                return;
            }
        }
        cout << s;
        // if()
        // if (first > second)
        //     cout << "first";
        // else if (first < second)
        //     cout << "second";
        // else
        //     cout << s;
    }
}
/*--------------------------------------------------testcase--------------------------------------------*/

// int32_t main()
signed
main()
{
    fastio();
    //cout.precision(numeric_limits<double>::max_digits10);

    ll t = 1;
    //cin>>t;
    for (ll i = 1; i <= t; i++)
    {
        //cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}