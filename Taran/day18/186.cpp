// Problem Link : https://codeforces.com/contest/1530/problem/B
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
#define min(a, b) (a < b ? a : b)
#define INF 0x3f3f3f3f
#define min(a, b) (a < b ? a : b)
#define abs(a) ((a) > 0 ? (a) : -(a))
#define max(a, b) (a > b ? a : b)
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
  ll h, w;
  cin >> h >> w;
  ll arr[h][w];
  // for (int i = 0; i < h; i++) {
  //   for (int j = 0; j < w; j++) {
  //     arr[i][j] = 0;
  //   }
  // }
  memset(arr, 0, sizeof arr);
  for (int i = 0; i < w; i += 2) {
    // if (!(i & 1)) {
    arr[0][i] = 1;
    arr[h - 1][i] = 1;
    // }
  }
  for (int i = 2; i < h - 2; i += 2) {
    arr[i][0] = 1;
    arr[i][w - 1] = 1;
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << arr[i][j] << "";
    }
    cout << "\n";
  }
  cout << "\n";
}
int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}