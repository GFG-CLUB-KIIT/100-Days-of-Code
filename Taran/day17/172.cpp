// Problem Link : https://codeforces.com/contest/1363/problem/B
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
  string s;
  cin >> s;
  // set<string> st;
  ll n = s.size();
  // ll min_c = INT_MAX;
  ll one = 0, zero = 0;
  if (n == 1 && (s[0] == 1 || s[0] ==0)) {
    cout << 0 << "\n";
    return;
  }
  for (int i = 0; i < n; ++i) {
    if (s[i] == '1') {
      one++;
    } else {
      zero++;
    }
  }
  ll min_c = INT_MAX;
  int d_one = 0, d_zero = 0;
  for (int i = 0; i < n; i++) {
    // 0->1
    if (s[i] == '0') {
      d_zero++;
      min_c = min(min_c, d_one + zero - d_zero);
      // 1->0
    } else {
      // s[i]=='1'
      d_one++;
      min_c = min(min_c, d_zero + one - d_one);
    }
    // min_c = min(min_c, min(d_one, one) + min(d_zero, zero));
  }
  if (min_c != INT_MAX)
    cout << min_c << "\n";
}

int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}