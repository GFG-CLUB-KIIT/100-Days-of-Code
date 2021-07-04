// Problem Link : https://codeforces.com/contest/1373/problem/C
#include <algorithm>
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
  string s;
  cin >> s;
  ll n = s.size();
  // cin >> n;
  ll mini = 0;
  ll count = 0, res = 0;

  for (int i = 0; i < n; ++i) {
    if (s[i] == '+') {
      count++;
    } else {
      count--;
    }
    // cout << count << "\n";
    if (mini > count) {

      mini = count;
      res += i + 1;
    }
  }
  cout << res + n << "\n";
}
int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
