// Problem Link : https://codeforces.com/contest/1424/problem/G
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
  ll n;
  cin >> n;
  ll b, d;
  map<ll, ll> m;
  set<ll> s;
  while (n--) {
    cin >> b >> d;
    m[b]++;
    m[d]--;
    s.insert(b);
    s.insert(d);
  }
  int sum = 0;
  int best_year = 0;
  int ans_year = 0;
  for (auto i : s) {
    // cout << i << " ";
    sum += m[i];
    // cout << m[i] << " " << " SUM = " << sum;
    if (sum > best_year) {
      ans_year = i;
      best_year = sum;
    }
  }
  cout << ans_year << " " << best_year << endl;
}
int main() {
  IOS ll t = 1;
  //   cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}