// Problem Link : https://codeforces.com/contest/1538/problem/C
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
ll lowerindex(ll arr[], ll n, ll x, ll index) {
  ll low = index;
  ll high = n - 1;
  while (low <= high) {
    ll mid = low + (high - low) / 2;
    if (arr[mid] >= x) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return low;
}
ll upperindex(ll arr[], ll n, ll y, ll index) {
  ll low = index;
  ll high = n - 1;
  while (low <= high) {
    ll mid = low + (high - low) / 2;
    if (arr[mid] <= y) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return high;
}
ll cal(ll arr[], ll n, ll x, ll y, ll i) {
  ll count = 0;
  count += upperindex(arr, n, y, i) - lowerindex(arr, n, x, i) + 1;
  return count;
}
void solve() {
  ll n, l, r;
  cin >> n >> l >> r;
  ll arr[n];
  ll count = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    int x = l - arr[i];
    int y = r - arr[i];
    count += cal(arr, n, x, y, i + 1);
  }
  cout << count << endl;
}

int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
}
