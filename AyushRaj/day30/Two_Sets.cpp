// https://cses.fi/problemset/task/1092/
/******************************
     codificador10
*******************************/
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define INF 1e18
#define ll long long int
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define PI 3.141592653589793238462
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define sii set<int>
#define sll set<ll>
#define pb push_back
#define ppb pop_back
#define nline '\n'
#define mp make_pair
#define ff first
#define ss second
#define gri greater<int>()
#define pop_count(x) __builtin_popcount(x)
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = b - 1; i >= a; i--)
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) //sort map by second
{
    return (a.second < b.second);
}
ll modulo(ll x) //modulo operations
{
    return ((x % +mod) % mod);
}
ll add_mod(ll a, ll b)
{
    return modulo(modulo(a) + modulo(b));
}
ll mul_mod(ll a, ll b)
{
    return modulo(modulo(a) * modulo(b));
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

void chanel()
{
    int n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum & 1)
    {
        cout << "NO" << nline;
        return;
    }

    if ((n - 3) % 4 != 0 && (n - 4) % 4 != 0)
        cout << "NO" << nline;
    else
    {
        cout << "YES" << nline;
        vii a, b;
        if ((n - 4) % 4)
        {
            a.pb(1), a.pb(2);
            b.pb(3);
            rep(i, 4, n + 1)
            {
                if (i % 4 == 0 || (i + 1) % 4 == 0)
                    a.pb(i);
                else
                    b.pb(i);
            }
            cout << a.size() << nline;
            for (auto it : a)
                cout << it << " ";
            cout << nline;
            cout << b.size() << nline;
            for (auto it : b)
                cout << it << " ";
            cout << nline;
        }
        else if ((n - 3) % 4)
        {
            a.pb(1), a.pb(4);
            b.pb(2), b.pb(3);
            rep(i, 5, n + 1)
            {
                if (i % 4 == 0 || (i - 1) % 4 == 0)
                    a.pb(i);
                else
                    b.pb(i);
            }
            cout << a.size() << nline;
            for (auto it : a)
                cout << it << " ";
            cout << nline;
            cout << b.size() << nline;
            for (auto it : b)
                cout << it << " ";
            cout << nline;
        }
    }
}

/*--------------------------------------------------testcase--------------------------------------------*/

// int32_t main()
signed main()
{
    fastio();
    //cout.precision(numeric_limits<double>::max_digits10);

    ll t = 1;
    //cin>>t;
    for (ll i = 1; i <= t; i++)
    {
        //cout<<"Case #"<<i<<": ";
        chanel();
    }
    return 0;
}