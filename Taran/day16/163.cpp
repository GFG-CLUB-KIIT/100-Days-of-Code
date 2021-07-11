// Problem  Link : https://codeforces.com/contest/1547/problem/B
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
  s = '*' + s;
  s = s + '*';
  ll best_left = 0, best_right = 0;
  ll n = s.size();
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'a') {
      best_left = i - 1;
      best_right = i + 1;
      break;
    }
  }
  char ch = 'b';
  while (best_left >= 0 || best_right < n) {
    if (s[best_left] == ch) {
      best_left--;
      ch++;
    } else if (s[best_right] == ch) {
      best_right++;
      ch++;
    } else {
      break;
    }
  }
  if (best_left == 0 && best_right == s.size() - 1) {
    cout << "YES"
         << "\n";
  } else {
    cout << "NO"
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
