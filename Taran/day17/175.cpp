// Problem Link :  https://codeforces.com/contest/1546/problem/B
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
  ll n, m;
  cin >> n >> m;
  ll a[m][26];
  string s;
  for (int i = 0; i < n; i++) {

    cin >> s;

    for (int j = 0; j < s.length(); j++) {
      a[j][s[j] - 'a']++;
    }
  }
  for (int i = 1; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++) {
      a[j][s[j] - 'a']--;
    }
  }
  string ans;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < 26; j++) {
      if (a[i][j] > 0) {
        ans += (char)(j + 'a');
      }
    }
  }
  cout << ans << "\n";
}

int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}