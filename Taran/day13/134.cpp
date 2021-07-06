// Problem Link : https://codeforces.com/contest/1066/problem/B
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <future>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
#define max(a, b) (a > b ? a : b)
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
  // 1-present else 0
  ll n, r;
  cin >> n >> r;
  ll arr[n];
  ll count_0 = 0, count_1 = 0;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    if (arr[i] == 1) {
      count_1++;
    } else {
      count_0++;
    }
  }
  if (count_0 == n) {
    cout << -1 << "\n";
    return;
  }
  ll best_heater = -1;
  for (int i = 0; i < min(n, r); ++i) {
    if (arr[i] == 1) {
      best_heater = i;
    }
  }
  if (best_heater == -1) {
    cout << -1 << "\n";
    return;
  }
  ll ans = 1; // got 1
  while (best_heater < (n - r)) {
    ll prev = best_heater;
    ll find = min(n, 2 * r + best_heater);
    for (int i = best_heater + 1; i < find; i++) {
      if (arr[i] == 1) {
        best_heater = i;
      }
    }
    if (best_heater == prev) {
      cout << -1 << "\n";
      return;
    } else {
      ans++;
    }
  }
  cout << ans << "\n";
}

int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
