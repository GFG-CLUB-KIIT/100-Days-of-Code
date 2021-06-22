// Problem Link : https://atcoder.jp/contests/abc206/tasks/abc206_d/

#include <bits/stdc++.h>
#include <cctype>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
#define INF 0x3f3f3f3f
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define abs(a) ((a) > 0 ? (a) : -(a))
#define sc(a) scanf("%d\n", &a);
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
bool vis[200105];
vector<ll> adj[200105];
set<ll> s;
void bfs(int n, int s) {

  queue<int> q;
  vis[s] = true;

  q.push(s);
  while (!q.empty()) {
    int a = q.front();
    q.pop();
    // cout << a << " ";
    // cout<<adj[a].size()<<" ";
    for (auto i : adj[a]) {
      if (vis[i] == false) {
        vis[i] = true;
        // cout<<i<<" ";
        q.push(i);
      }
    }
  }
}
int bfsdis(int n) {
  // ll ans = s.size();
  int count = 0;
  // bool vis[n + 1];
  for (auto i : s) {
    vis[i] = false;
  }
  for (auto i : s) {
    if (vis[i] == false) {
      // vis[i] = true;

      count++;
      bfs(n, i);
    }
  }
  return count;
}
void solve() {
  ll n;
  cin >> n;
  ll arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n / 2; i++) {
    if (arr[i] != arr[n - i - 1]) {
      adj[arr[i]].push_back(arr[n - i - 1]);
      adj[arr[n - i - 1]].push_back(arr[i]);
      s.insert(arr[i]);
      s.insert(arr[n - i - 1]);
      // }
    }
  }
  // cout << s.size() << "\n";
  // cout << bfsdis(n);
  cout << s.size() - bfsdis(n) << "\n";
}

int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
}
