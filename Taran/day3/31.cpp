// Problem Link :https://codeforces.com/problemset/problem/1490/E
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

void solve() {
  ll n;
  cin >> n;
  ll arr[n];
  set<ll> s;
  vector<pair<ll, ll>> v;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; ++i) {
    s.insert(arr[i]);
    v.push_back({arr[i], i + 1});
  }
  sort(v.begin(), v.end());
  // for (auto i : v) {
  //   cout << i << " ";
  // }
  ll sum = 0;
  ll prefix[n];
  for (int i = 0; i < n; ++i) {
    sum += v[i].first;
    prefix[i] = sum;
  }
  ll next_player = -1;
  // from back
  vector<ll> res;
  for (int i = n - 1; i >= 0; --i) {
    if (prefix[i] >= next_player) {
      res.push_back(v[i].second);
      next_player = v[i].first; // update
    } else {
      break;
    }
  }
  cout << res.size() << endl;
  sort(res.begin(), res.end());
  for (auto i : res) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
}
