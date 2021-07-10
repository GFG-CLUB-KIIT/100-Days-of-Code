// Problem Link : https://atcoder.jp/contests/abc191/tasks/abc191_c
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
  ll h, w;
  cin >> h >> w;
  char arr[h][w];
  ll count = 0, result = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      count = 0;
      if (arr[i][j] == '#') {
        count++;
      }
      if (arr[i + 1][j] == '#') {
        count++;
      }
      if (arr[i][j + 1] == '#') {
        count++;
      }
      if (arr[i + 1][j + 1] == '#') {
        count++;
      }
      if (count == 1 || count == 3) {
        result++;
      }
    }
  }
  cout << result << "\n";
}
int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
