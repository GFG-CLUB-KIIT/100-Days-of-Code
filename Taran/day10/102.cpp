// Problem Link : https://codeforces.com/contest/1401/problem/C
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
  ll n;
  cin >> n;
  ll arr[n];
  ll b[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    b[i] = arr[i];
  }
  ll mini = *min_element(arr, arr + n);
  sort(b, b + n);
  if (n == 1) {
    cout << "YES"
         << "\n";
    return;
  }
  bool flag = false;
  vector<ll> v;
  for (int i = 0; i < n; i++) {
    if ((arr[i] % mini) == 0) {
      v.push_back(arr[i]);
      arr[i] = 0;
    }
  }
  sort(v.begin(), v.end());
  // for (auto i : v) {
  //   cout << i << " ";
  // }
  int j = 0;
  for (int i = 0; i < n; i++) {
    // cout << arr[i] << " ";
    if (arr[i] == 0) {
      arr[i] = v[j];
      j++;
      // cout << arr[i] << " ";
    }
  }
  // for(int i = 0; i < n; i++){
  //   cout << arr[i] << " ";
  // }
  for (int i = 0; i < n; i++) {
    // cout << arr[i] << " ";
    if (i + 1 < n) {
      if (arr[i] > arr[i + 1]) {
        cout << "NO"
             << "\n";
        return;
      }
    }
  }

  cout << "YES" << endl;
}
int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
