// Problem Link : https://codeforces.com/contest/1486/problem/A
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
  ll sum = 0;
  bool flag = false;
  ll h[n];
  for (int i = 0; i < n; ++i) {
    cin >> h[i];
    if (i > 0) {
      if (h[i - 1] > i - 1) {
        h[i] += h[i - 1] - (i - 1);
        h[i - 1] = i - 1;
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    if (i + 1 < n) {
      if (h[i] >= h[i + 1]) {
        flag = true;
      }
    }
  }
  if (flag == true) {
    cout << "NO"
         << "\n";
  } else {
    cout << "YES"
         << "\n";
  }
}
int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}