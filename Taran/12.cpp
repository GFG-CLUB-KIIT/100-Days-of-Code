// Problem Link : https://codeforces.com/contest/1539/problem/C

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
const ll N = 1e9 + 7;
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
void solve() {
  ll n, k, x;
  cin >> n >> k >> x;
  ll arr[n];
  for (ll i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  ll res = 1;
  ll count = 1;
  vector<ll> help;
  for (ll i = 1; i < n; ++i) {
    if (abs(arr[i] - arr[i - 1]) > x) {
      count++;
      ll required = (arr[i] - arr[i - 1] - 1) / x;
      help.push_back(required);
    }
  }
  sort(help.begin(), help.end());
  for (auto i : help) {
    if (i <= k) {
      k -= i;
      count--;
    } else {
      break;
    }
  }
  cout << count << endl;
}

int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
}
