// Problem Link : https://codeforces.com/contest/1399/problem/C
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
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
void solve() {
  ll n;
  cin >> n;
  ll w[n];
  set<ll> s;
  for (int i = 0; i < n; ++i) {
    cin >> w[i];
  }
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; j++) {
      s.insert(w[i] + w[j]);
    }
  }
  ll ans = 0;
  ll count = 0;
  for (auto e : s) {
    // cout << i << " ";
    vector<bool> vis(n, false);
    count = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (vis[i] == true || vis[j] == true || i == j) {
          continue;
        }
        if (w[i] + w[j] == e) {
          vis[i] = true;
          vis[j] = true;
          count++;
        }
      }
    }
    ans = max(ans, count);
  }
  cout << ans << "\n";
}
int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
