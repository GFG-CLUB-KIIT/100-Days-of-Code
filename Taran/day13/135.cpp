// Problem Link : https://codeforces.com/contest/1066/problem/C
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define INF 0x3f3f3f3f
#define min(a, b) (a < b ? a : b)
#define abs(a) ((a) > 0 ? (a) : -(a))
#define all(a) a.begin(), a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb push_back
#define pi pair<ll, ll>
#define ll long long int
#define pqq priority_queue
#define reverse(a) reverse(all(a))
#define IOS                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define rep(i, n) for (int i = 0; i < n; ++i)
#define c(a) cout << a << "\n";
using namespace std;
ll vis[200005];
void solve() {
  ll q;
  cin >> q;
  char ch;
  int l = 0, r = 0;
  while (q--) {
    cin >> ch;
    if (ch == 'L') {
      ll n;
      cin >> n;
      vis[n] = l;
      // 0 -1
      // l--;
      if (l == 0) {
        r++;
      }
      l--;
    }
    if (ch == 'R') {
      ll n;
      cin >> n;
      // 1
      vis[n] = r;
      if (r == 0) {
        l--;
      }
      r++;
    }
    ll res = 0;
    if (ch == '?') {
      ll n;
      cin >> n;
      res = min(vis[n] - l - 1, r - 1 - vis[n]);
      cout << res << "\n";
    }
  }
}

int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}