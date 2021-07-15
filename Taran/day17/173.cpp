// Problem Link : https://codeforces.com/contest/1363/problem/A
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
  ll n, x;
  cin >> n >> x;
  ll arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // vector<int> odd, even;
  ll odd = 0, even = 0;
  if (n == 1 && arr[0] & 1) {
    cout << "Yes"
         << "\n";
    return;
  }
  if (n == 1 && !(arr[0] & 1)) {
    cout << "No"
         << "\n";
    return;
  }
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    if (arr[i] & 1) {
      odd++;
    } else {
      even++;
    }
    // cout << sum;
  }
  /// not poss
  if (odd == 0) {
    cout << "No"
         << "\n";
    return;
  }
  // 1
  if (x == n) {
    if (sum & 1) {
      cout << "Yes"
           << "\n";
    } else {
      cout << "No"
           << "\n";
    }
  } else if (n == odd && !(x & 1)) {
    cout << "No"
         << "\n";
  } else {
    cout << "Yes"
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