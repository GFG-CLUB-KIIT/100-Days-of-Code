// Problem Link : https://codeforces.com/contest/1530/problem/C
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
#define min(a, b) (a < b ? a : b)
#define INF 0x3f3f3f3f
#define min(a, b) (a < b ? a : b)
#define abs(a) ((a) > 0 ? (a) : -(a))
#define max(a, b) (a > b ? a : b)
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
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  ll b[n];
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  // int j=0;
  // while(1){
  //   for(int i=0;i<j;i++){ //}
  // }
  priority_queue<ll, vector<ll>, greater<ll>> pq1, pq2;
  ll sum1 = 0, sum2 = 0;
  for (int i = 0; i < n; i++) {
    sum1 += arr[i];
    pq1.push(arr[i]);
  }
  for (int i = 0; i < n; i++) {
    sum2 += b[i];
    pq2.push(b[i]);
  }
  ll shift = (n / 4);
  vector<ll> store;
  ll count = 0;
  while (shift != 0) {
    shift--; // remove stages
    sum1 -= pq1.top();
    sum2 -= pq2.top();
    store.pb(pq2.top());
    pq1.pop();
    pq2.pop();
  }
  count = 0;
  while (sum1 < sum2) {
    count++; // adding new stage
    n++;
    pq1.push(100);
    pq2.push(0);
    sum1 += 100;
    if (n % 4 == 0) {
      sum1 -= pq1.top();
      pq1.pop();
    } else {
      if (store.size()) {
        sum2 += store.back();
        store.pop_back();
      }
    }
  }
  cout << count << "\n";
}

int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}