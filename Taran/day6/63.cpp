// Problem Link : https://codeforces.com/problemset/problem/913/B
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
  vector<ll> adj[1005];
  for (int i = 2; i <= n; ++i) {
    int x;
    cin >> x;
    adj[x].push_back(i);
  }
  int count = 0;
  for (int i = 1; i <= n; i++) {
    count = 0;
    if (adj[i].size() == 0) {
      continue;
    }
    for (auto j : adj[i]) {
      if (adj[j].size() == 0) {
        count++;
      }
    }
    if (count < 3) {
      cout << "No"
           << "\n";
      return;
    }
  }
  cout << "Yes"
       << "\n";
}
int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}