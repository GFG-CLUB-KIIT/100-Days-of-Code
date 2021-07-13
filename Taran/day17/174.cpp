// Problem Link :  https://codeforces.com/contest/1546/problem/C
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
  ll arr[n];
  ll b[n];
  map<pair<ll, ll>, ll> m;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    // m[arr[i]]++;
    m[{arr[i], i % 2}]++;
    b[i] = arr[i];
  }
  sort(b, b + n);
  int temp = 0;
  for (int i = 0; i < n; i++) {
    //
    if (arr[i] == b[i]) {
      m[{b[i], i % 2}]--;

      continue;
    }
    // i->odd
    if (m[{b[i], i % 2}] > 0) {
      m[{b[i], i % 2}]--;
      continue;
    } else {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES"
       << "\n";
}

int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}