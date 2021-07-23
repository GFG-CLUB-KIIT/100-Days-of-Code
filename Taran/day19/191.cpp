// Problem Link : https : // codeforces.com/contest/1337/problem/C
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
long n1 = 200005;
vector<ll> adjacency[200005];
// ll store_depth[200005];
vector<ll> store_depth(n1), subtree(n1);
// bool vis[200005];
void findans(ll node, ll parent, ll depth) {
  // int count = 0;
  subtree[node] = 1;
  store_depth[node] = depth;
  for (auto i : adjacency[node]) {
    if (i != parent) {
      findans(i, node, depth + 1);
      subtree[node] += subtree[i];
    }
  }
  store_depth[node] -= (subtree[node]);
  // cout << store_depth[node] << " ";
  // return count;
}
void solve() {
  ll n, k;
  cin >> n >> k;
  for (int i = 0; i < n - 1; i++) {
    ll u, v;
    cin >> u >> v;
    adjacency[u].pb(v);
    adjacency[v].pb(u);
  }
  findans(1, 0, 1);
  ll res = 0;
  // for (int i = 0; i < store_depth.size(); i++) {
  //   cout << store_depth[i] << " ";
  // }
  // cout << "\n";
  // for (int i = 0; i < subtree.size(); i++) {
  //   cout << subtree[i] << " ";
  //   res += store_depth[i];
  // }
  priority_queue<ll> pq;
  // sort(store_depth, store_depth + n1);
  for (int i = 1; i <= n; i++) {
    pq.push(store_depth[i]);
  }
  for (int i = n; i > n - k; i--) {
    res += pq.top();
    pq.pop();
  }
  // cout << 1 << " ";
  cout << res << "\n";
}

int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
