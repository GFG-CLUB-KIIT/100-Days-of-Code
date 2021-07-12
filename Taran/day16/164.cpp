// Problem  Link :https://codeforces.com/contest/1547/problem/C
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
  ll k, n, m;
  cin >> k >> n >> m;
  ll arr[n], b[m];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  vector<int> res;
  int i = 0, j = 0;
  while (i < n || j < m) {
    // if (arr[i] <= k) {
    //   res.push_back(arr[i]);
    // i++;
    // }
    if (arr[i] == 0 && i < n) {
      k++;
      i++;
      res.push_back(0);
    } else if (b[j] == 0 && j < m) {
      k++;
      j++;
      res.push_back(0);
    } else {
      if (i < n && arr[i] <= k) {
        i++;
        res.push_back(arr[i - 1]);
      } else if (j < m && b[j] <= k) {
        j++;
        res.push_back(b[j - 1]);
      } else {
        cout << "-1"
             << "\n";
        return;
      }
    }
  }
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
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
