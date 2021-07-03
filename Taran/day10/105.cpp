// Problem Link : https://codeforces.com/contest/1490/problem/B
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
void solve() {

  ll n;
  cin >> n;
  ll arr[n];
  ll c1 = 0, c2 = 0, c3 = 0;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; ++i) {
    if (arr[i] % 3 == 0) {
      c1++;
    } else if (arr[i] % 3 == 1) {
      c2++;
    } else {
      c3++;
    }
  }
  // cout << c1 << " " << c2 << " " << c3 << "\n";
  if (c1 == c2 && c2 == c3) {
    cout << 0 << "\n";
    return;
  }
  ll res = 0;
  ll b = n / 3;
  for (int i = 0; i < 2; ++i) {
    if (c1 > b) {
      res += (c1 - b);
      c2 += (c1 - b);
      c1 = b;
    }
    if (c2 > b) {
      res += (c2 - b);
      c3 += (c2 - b);
      c2 = b;
    }
    if (c3 > b) {
      res += (c3 - b);
      c1 += (c3 - b);
      c3 = b;
    }
  }
  cout << res << "\n";
}
int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
