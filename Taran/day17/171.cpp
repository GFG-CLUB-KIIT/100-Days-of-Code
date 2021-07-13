// Problem Link : https://codeforces.com/contest/1363/problem/C
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
vector<ll> adj[20005];
void solve() {
  ll n, x;
  cin >> n >> x;
  ll degree = 0;
  for (int i = 0; i < n-1; i++) {
    ll u, v;
    cin >> u >> v;
    // adj[u].push_back(v);
    // adj[v].push_back(u);
    if (u == x || v == x) {
      degree++;
    }
  }
  // cout << degree << endl;
  if (degree <= 1) {
    cout << "Ayush"
         << "\n";
    return;
  }
  if ((n-1) & 1) {
    cout << "Ayush"
         << "\n";
  } else {
    cout << "Ashish"
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