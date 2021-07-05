// Problem Link : https://codeforces.com/contest/1474/problem/B
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
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
ll primegreat(ll a) {
  int temp = 0;
  while (1) {
    temp = 0;
    for (int i = 2; i * i <= a; i++) {
      if (a % i == 0) {
        temp = 1;
        break;
      }
    }
    if (temp == 0)
      break;
    else
      a++;
  }
  return a;
}
void solve() {
  ll d;
  cin >> d;
  ll res = 0;
  ll a = d + 1;
  a = primegreat(a);
  ll b = a + d;
  b = primegreat(b);
  res = a * b;
  cout << res << "\n";
}

int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
