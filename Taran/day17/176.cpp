// Problem Link : https://codeforces.com/contest/1546/problem/A
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
const ll mod = 1e9 + 7;
void solve() {
  ll n;
  cin >> n;
  vector<pair<int, int>> v;

  ll arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  ll b[n];
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  ll find[n];
  // map<int, int> m;
  // int ii = 0, jj = 0;
  for (int j = 0; j < n; j++) {
    find[j] = arr[j] - b[j];
  }
  for (int i = 0; i < n; i++) {
    // if (arr[i] == b[i])
    if (find[i] == 0) {
      continue;
    }
    for (int j = i + 1; j < n && find[i] != 0; j++) {
      if (find[i] < 0 && find[j] > 0) {
        while (find[i] != 0 && find[j] != 0) {
          find[i]++;
          find[j]--;
          v.pb({j + 1, i + 1});
        }
      } else if (find[i] > 0 && find[j] < 0) {
        while (find[i] != 0 && find[j] != 0) {
          find[i]--;
          find[j]++;
          v.pb({i + 1, j + 1});
        }
      }
    }
  }
  for (int k = 0; k < n; k++) {
    if (find[k] != 0) {
      cout << -1 << "\n";
      return;
    }
  }
  cout << v.size() << endl;
  for (auto i : v) {
    cout << i.first << " " << i.second << "\n";
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
