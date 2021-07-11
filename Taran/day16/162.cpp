// Problem Link : https://codeforces.com/contest/1547/problem/A
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
  // ll n;
  // cin >> n;
  // ll arr[n];
  // for (int i = 0; i < n; ++i) {
  //   cin >> arr[i];
  // }
  ll xa, ya, xb, yb, fa, fb;
  cin >> xa >> ya >> xb >> yb >> fa >> fb;
  // cout << 1;
  ll count = abs(xb - xa) + abs(yb - ya);
  ll temp1 = min(ya, yb);
  ll temp2 = min(xa, xb);
  ll temp3 = max(ya, yb);
  ll temp4 = max(xa, xb);
  if ((xa == xb && xb == fa && fb >= temp1 && fb <= temp3) ||
      (ya == yb && yb == fb && fa >= temp2 && fa <= temp4)) {
    count += 2;
  }
  cout << count << endl;
}
int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
