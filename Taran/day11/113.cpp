// Problem Link : https://codeforces.com/contest/1542/problem/B
// * AUTHOR :: TARANPREET {SINGH} CHABBRA  *//
//* {CODE : CODEFORCES} *//
//* {TIME : 2021-07-03 20:24:10} *//
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
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
  ll n, a, b;
  ll temp = 1;
  cin >> n >> a >> b;
  // if (n < a && n < b) {
  //   cout << "No"
  //        << "\n";
  //   return;
  // }
  if ((n - 1) % b == 0) {
    cout << "Yes"
         << "\n";
    return;
  }
  int flag = 1;
  if (a == 1) {
    if ((n - 1) % b == 0) {
      cout << "Yes"
           << "\n";
    } else {
      cout << "No"
           << "\n";
    }
  } else {
    // } else {
    //   cout << "No"
    //        << "\n";
    // }
    temp = 1;
    while (n >= temp) {
      if ((n - temp) % b == 0) {
        cout << "Yes"
             << "\n";
        flag = 0;
        return;
        break;
      }
      temp = temp * a;
      // else {
    }
    if (flag)
      cout << "No"
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